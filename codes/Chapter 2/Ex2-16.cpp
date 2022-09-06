/*
(a) 合法  给r2赋值3.14159 即给d赋值3.14159 
(b) 合法  给r2赋值0
(c) 合法  给i赋值3 因为是双精度浮点数转换成整型赋值
(d) 合法  给r1赋值为0


*/
#include<iostream>
int main(){
	int i = 0, &r1 = i;
	r1 = 6.15;
	std::cout<<r1<<std::endl;
}