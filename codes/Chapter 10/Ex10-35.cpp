#include<vector>
#include<iostream>

int main(){
	std::vector<int> vec{ 5, 6, 9, 10, 41 };
	auto iter = vec.end() - 1;
	while ( true ) {
		std::cout << *iter << " ";
		if ( iter == vec.begin() ) break;
		--iter;
	}
	return 0;
}