#include<vector>
#include<string>
#include<iostream>
#include<functional>
#include<algorithm>


using namespace std;
using namespace std::placeholders;

bool check_size( const string& s, string::size_type sz ){
	return s.size() < sz;
}


int main(){
	vector<int> ivec{ 2, 1323, 234, 3423 };
	string s; cin >> s;
	auto pos = find_if( ivec.begin(), ivec.end(), bind( check_size, s, _1 ));
	if ( pos != ivec.end() ) cout << *pos;
	else cout << "Not found!" << endl;
	return 0; 
}