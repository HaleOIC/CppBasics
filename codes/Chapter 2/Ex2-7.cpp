/*
(a) Who goes with Fergus?\n
(b) 3.14e1L long double literal 
(c) 1024f 无效 1024 is a numerical literal not a float 
(d) long double
*/
#include<iostream>
#include<string>
int main(){
	std::string a = "Who goes with F\145rgus?\012";
	std::cout<< a;
	long double b = 3.14e1L;
	std::cout<< b << std::endl;
	double c = 1024.0f;
	std::cout<< c <<std::endl;
	double d = 3.14L;
	std::cout<< d <<std::endl;
	return 0;
}