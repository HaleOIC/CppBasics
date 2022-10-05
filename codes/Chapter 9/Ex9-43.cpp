#include<string>
#include<vector>
#include<iostream>

using namespace std;

void replaceString( string& s, const string& oldVal, const string& newVal ){
	for ( auto cur = s.begin(); cur != s.end() - oldVal.size(); )
		if ( oldVal == string( cur, cur+oldVal.size() ) ) 
			cur = s.erase( cur, cur + oldVal.size() ),
			cur = s.insert( cur, newVal.begin(), newVal.end() ),
			cur += newVal.size();
		else ++cur;
}


int main(){
	string s{ "To drive straight thru is a foolish, tho courageous act." };
    replaceString(s, "tho", "though");
    replaceString(s, "thru", "through");
    cout << s << endl;

    return 0;
}
