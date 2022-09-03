#include<iostream>

int main(){
	int input_value;
	std::cin >> input_value; 
	long long  i = 3.14;
	double salary  = 9999.99, wage = salary;
	int p = 3.14;
	return 0;
}
/*
(a): 应该先定义再使用。
(b): 用列表初始化内置类型的变量时，如果存在丢失信息的风险，则编译器将报错。
(c): 不能连等去初始化值
(d): 不报错，但是小数部分会被截断。
*/