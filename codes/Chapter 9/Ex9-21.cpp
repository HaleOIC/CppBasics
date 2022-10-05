#include<vector>
#include<iostream>

using namespace std;

int main(){
	vector<int> vec;
	auto iter = vec.begin();
	int value;
	while ( cin >> value ) iter = vec.insert( iter, value );
	for ( auto each : vec ) cout << each << " ";
	return 0;
}