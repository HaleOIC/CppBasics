#include<iostream>
int main() {
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype((b)) d = a;
	++c;
	++d;
	std::cout<< a<< b << c << d<< std::endl;
	return 0;
}
/*
a 整型变量 4
b 整型变量 4
c 整型变量 4
d 整型变量引用 4
*/