#include<iostream>
int main(){
	int *ptr = nullptr;
	int i =  5;
	int j = 10;
	ptr = &i;
	std::cout<< *ptr << std::endl;
	ptr = &j;
	std::cout<< *ptr << std::endl;
	*ptr = -10;
	std::cout<< *ptr << std::endl;
	return 0;
}