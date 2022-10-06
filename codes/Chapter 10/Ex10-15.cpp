#include<iostream>

int main(){
	int val = 10;
	auto f = [val]( const int& val1 ) -> int { return val + val1; };
	std::cout << f( 4 );
	return 0;
}