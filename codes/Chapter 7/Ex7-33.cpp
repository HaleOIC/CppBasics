#include<iostream>
#include<vector>
#include<string>

class Screen{
public:
	using pos = std::string::size_type;


	friend class Window_mgr;

	Screen() = default;
	Screen( const pos& len, const pos& wid):
		_contents( len * wid, ' '), _len( len ), _wid( wid ) {};
	Screen( const pos& len, const pos& wid, char c ):
		_contents( len*wid, c ), _len( len ), _wid( wid ){};

	inline Screen set( char );
	inline Screen set( pos, pos, char );
	inline Screen move(pos r, pos c);


	char get() const {return _contents[ _focus ];}
	inline char get( pos ht, pos wd );
	
	pos size() const;

	const Screen display( std::ostream &os) const{
		do_display( os ); return *this;
	}
	Screen display( std::ostream &os ) {
		do_display( os ); return *this;
	}

private:
	std::string _contents;
	pos _len = 0, _wid = 0;
	pos _focus = 0;
	void do_display( std::ostream &os ) const { os << _contents ; }
};

class Window_mgr{
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear( ScreenIndex );

private:
	std::vector< Screen > screens {Screen(24,80,' ')};  
};

void Window_mgr::clear( ScreenIndex i ){
	Screen &s = screens[i];
	s._contents = std::string( s._len * s._wid, ' ' );
}


inline char Screen::get( pos r, pos c ){
	pos row = r * _wid;
	return _contents[ row + c ];
}
Screen Screen::move( pos r, pos c){
	pos row = r * _wid;
	_focus = row + c;
	return *this;
}
inline Screen Screen::set( char c ){
	_contents[ _focus ] = c;
	return *this;
}
inline Screen Screen::set( pos r, pos c, char ch ){
	_contents[ r * _wid + c ] = ch;
	return *this;
}
Screen::pos Screen::size() const {
	return _len * _wid;
}

int main(){
	Screen myScreen( 5, 5, 'X' );
	myScreen.move( 4, 0 ).set( '#' ).display( std::cout );
	std::cout << std::endl;
	myScreen.display( std::cout );
	std::cout << std::endl;
	return 0;
}