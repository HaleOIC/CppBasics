#include<iostream>
int main(){
	int a = 3, b = 4;
	decltype(a) c = a;
	decltype(a = b) d = a;
	std::cout << a << b << c << d << std::endl;
	return 0;
}
/*
a 整型变量 3 
b 整型变量 4
c 整形变量 3
d 整型变量引用 3
decltype (exp) 并不会执行这个表达式 而是直接判断表达式类型
*/