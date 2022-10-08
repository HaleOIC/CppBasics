#include<vector>
#include<iterator>
#include<iostream>

using namespace std;

auto f = []( const auto& val ) { cout << val << " ";};

int main(){
	vector<int> vec{ 2, 3, 6, 8, 10, 156 };
	for_each( vec.rbegin(), vec.rend(), f );
	return 0;
}