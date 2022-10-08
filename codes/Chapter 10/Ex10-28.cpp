#include<vector>
#include<list>
#include<iostream>
#include<algorithm>
#include<iterator>

using namespace std;

auto f = []( const auto& val ) { cout << val << " ";};

int main(){
	vector<int> ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
	list<int> lst1, lst2, lst3;


	copy( ivec.begin(), ivec.end(), inserter( lst1, lst1.begin() ));
	for_each( lst1.begin(), lst1.end(), f );
	cout << endl;

	copy( ivec.begin(), ivec.end(), front_inserter( lst2 ));
	for_each( lst2.begin(), lst2.end(), f );
	cout << endl;
	
	copy( ivec.begin(), ivec.end(), back_inserter( lst3 ));
	for_each( lst3.begin(), lst3.end(), f );
	return 0;
}