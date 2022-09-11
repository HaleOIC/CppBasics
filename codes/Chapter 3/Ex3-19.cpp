#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v1{42,42,42,42,42,42,42,42,42,42};
	vector<int> v2(10,42);
	vector<int> v3;
	for ( auto i = 0; i < 10; i++ ) v3.push_back(42);
	cout << v3.size();
	return 0;
}