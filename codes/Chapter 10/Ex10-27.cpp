#include<iostream>
#include<iterator>
#include<vector>
#include<algorithm>
#include<list>

using namespace std;

auto fout = []( const auto& val ) { cout << val << " ";};

int main(){
	vector<int> vec{ 1, 1, 2, 5, 7, 7, 10 };
	list<int> lst;

	unique_copy( vec.begin(), vec.end(), back_inserter(lst) );
	for_each( lst.begin(), lst.end(), fout );
	return 0;
}