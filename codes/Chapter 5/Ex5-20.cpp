#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector<string> svec;

bool find (const vector<string> s,const string t){
	for (auto &c: s)
		if ( c == t )
			return true;
	return false;
}

int main(){
	string s;
	while ( cin >> s ) {
		if ( find( svec, s ) ) {
			cout << s << endl;
			break;
		}
		else svec.push_back( s ); 
	}
	return 0;
}