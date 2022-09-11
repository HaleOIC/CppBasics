#include<iostream>
#include<vector>
using namespace std;
int main(){
	int val;
	vector<int> V;
	while ( cin >> val ) V.push_back(val);
	for ( decltype(V.size()) i = 0, length = V.size(); i < length-1; ++i ){
		cout << V[ i ] + V[ i + 1 ] << " ";
	} 
	for ( decltype(V.size()) i = 0, length = V.size(); i != length / 2; ++i ){
		cout << V[ i ] + V[ length - i - 1 ] << " "; 
	}
	return 0;
}