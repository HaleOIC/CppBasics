#include<iostream>

int main(){
	int v1,v2;
	std::cin>>v1 >> v2;
	std::cout<< "The sum of"<< v1
			 << " and "<< v2
			 << "is "<< v1+v2<< std::endl;

	return 0;
}
/*
It can not be exacuated,because the first line is illegal.
It does not return an object,for the syntax ;
The solution to fix  the code is to delete the syntax ";" both the two lines.
*/