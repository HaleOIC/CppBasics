#include<iostream>
#include<string>

using namespace std;

bool judge(const string& s ){
	for ( auto c : s )
		if ( isupper(c) ) return false;
	return true; 
}

void toUpper( string& s ){
	for ( auto &c : s ){
		c = char(toupper(c));
		// c = toupper(c);
	}
}

int main(){
	string s("This is a string!");
	cout << (judge(s)?"True":"False") << endl;
	toUpper(s);
	cout << s << endl;
	return 0;
}