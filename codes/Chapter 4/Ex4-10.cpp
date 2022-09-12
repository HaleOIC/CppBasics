#include<iostream>
int read_value(){
	int tar; 
	std::cin >> tar;
	return tar;
}
int main(){
	int val;
	while ( (val = read_value()) != 42);
}
