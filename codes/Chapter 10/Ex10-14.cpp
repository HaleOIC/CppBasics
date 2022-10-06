#include<iostream>

auto f = [] ( const int& val1, const int& val2 ) -> int { return val1 + val2; };
int main(){
	std::cout << f( 3, 4 );
	return 0;
}