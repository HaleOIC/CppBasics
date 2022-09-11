#include<iostream>
#include<vector>
using namespace std;
int main(){
	int val;
	vector<int> V;
	while ( cin >> val ) V.push_back(val);
	for ( auto it = V.begin(); it != V.end() - 1; ++it ) cout << *it + *( it + 1 )  <<  " ";
	cout << endl;
	for ( auto it = V.begin(), mid = V.begin() + ( V.end() - V.begin() ) / 2;
			it != mid; ++it )
		cout << *it + *( V.end() - 1 - ( it - V.begin())) << " ";
	cout << endl;
	return 0;
}