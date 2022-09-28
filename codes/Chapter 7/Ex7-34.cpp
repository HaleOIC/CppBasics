#include<iostream>

int height;
class Screen{
public:
	void dummy_fcn( pos height ){
		cursor = width * height;
	}
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	using pos = std::string::size_type;
};
/*
	产生error因为不知道pos 是什么
*/