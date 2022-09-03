#include<iostream>
#include"Sales_item.h"
int main(){
	Sales_item sum, book;
	if (std::cin >> book ){
		sum = book;
		while (std::cin >> book){
			sum = sum + book;
		}	
		std::cout << sum << std::endl;
	}
	else {
		std::cout<< "Nothing!"<< std::endl;
	}
	return 0;
}