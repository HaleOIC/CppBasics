#include<iostream>
int main(){
	std::cout<<"Enter the two numbers as the range:"<<std::endl;
	int from,to;
	std::cin>>from>>to;
	if ( from > to ) std::cerr<<"There must be something wrong!"<<std::endl;
	while (from <= to){
		std::cout<<from<<std::endl;
		from++;
	}
	return 0;
}