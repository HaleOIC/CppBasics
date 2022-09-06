#include<iostream>
int main(){
	int i = 0;
	// double *dp = &i; 非法 无法将int*转换成double* ptr可指向的地址
	// int *ip = i;  非法 无法将int整型数赋值给指针
	int *p = &i;
	std::cout << *p << std::endl;
	return 0;
}