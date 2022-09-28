#include<iostream>
#include<string>

class Screen{
public:
	using pos = std::string::size_type;
	Screen() = default;
	Screen( const pos& len, const pos& wid, char c ):
		_contents( len*wid, c ), _len( len ), _wid( wid ){};

	char get() const {
		return _contents[ _focus ];
	}
	inline char get( pos ht, pos wd );
	Screen &move(pos r, pos c);

private:
	std::string _contents;
	pos _len = 0, _wid = 0;
	pos _focus = 0;
};
inline char Screen::get( pos r, pos c ){
	pos row = r * _wid;
	return _contents[ row + c ];
}
Screen& Screen::move( pos r, pos c){
	pos row = r * _wid;
	_focus = row + c;
	return *this;
}
