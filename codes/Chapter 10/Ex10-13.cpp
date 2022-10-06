#include<string>
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool judgeLength( const string& s ){
	if ( s.size() < 5 ) return true;
	else return false;
} 

int main(){
	vector<string> vstr{ "expression", "hello", "damn", "position", "compare", "hello my boy!"};
	auto iter = partition( vstr.begin(), vstr.end(), judgeLength );
	cout << *iter << endl;
	for ( auto each : vstr ) cout << each << " ";
	return 0;
}