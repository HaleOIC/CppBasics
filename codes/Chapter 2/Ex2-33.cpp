#include<iostream>
int main(){
	int i = 0, &r = i;
	auto a = r; 				// a是一个整数 (r 是 i 的别名，而 i 是一个整数)
	const int ci = i, &cr = ci;
	auto b = ci; 
	auto c = cr;
	auto d = &i;
	auto e = &ci;
	auto &g = ci;
	a = 42;				// 改变了 i 对应的值为42
	b = 42;				// 改变了 
	std::cout<< a << " " << b << " " << c << " " << d << " " << e << std::endl;
	return 0;
}