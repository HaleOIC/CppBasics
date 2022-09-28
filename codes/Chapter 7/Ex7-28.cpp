#include<iostream>
#include<string>

class Screen{
public:
	using pos = std::string::size_type;

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
int main(){
	Screen myScreen( 5, 5, 'X' );
	myScreen.move( 4, 0 ).set( '#' ).display( std::cout );
	std::cout << std::endl;
	myScreen.display( std::cout );
	std::cout << std::endl;
	return 0;
}