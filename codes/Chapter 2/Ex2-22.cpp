#include<iostream>
int main(){
	int i = 5,*p = &i;
	if (p) {std::cout<< "This is a pointer!\n";}
	if (*p) {std::cout<< "This is a interger number!\n";}
	return 0;
}