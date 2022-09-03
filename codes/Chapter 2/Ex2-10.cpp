#include<iostream>
#include<string>

std::string global_str;
int global_int;
int main(){
	std::cout<< global_str<< std::endl <<global_int<< std::endl;
	int local_int;
	std::string local_str;
	std::cout<< local_int<<std::endl << local_str << std::endl;
	return 0;
}
/*
global_str和global_int是全局变量，所以初值分别为空字符串和0。 
local_int是局部变量并且没有初始化，它的初值是未定义的。 
local_str 是 string 类的对象，它的值由类确定，为空字符串。
*/