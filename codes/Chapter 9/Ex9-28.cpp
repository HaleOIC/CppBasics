#include<iostream>
#include<string>
#include<forward_list>

using namespace std;

void insertString( forward_list<string>& lst,const string& sTar, const string& sRep ){
	auto curr = lst.begin();
	auto prev = lst.before_begin();
	while ( curr != lst.end() ){
		if ( *curr == sTar ) {
			curr = lst.insert_after( curr, sRep );
			break;
		}else prev = curr,curr++;
	}
	if ( curr == lst.end() ) lst.insert_after( prev, sRep );
}


int main(){
	forward_list<string> lst{"hello", "hahah", "lost"};
	string s1, s2;
	cin >> s1 >> s2;
	insertString( lst, s1, s2 );
	for ( auto iter = lst.begin(); iter != lst.end(); ++iter ) cout << *iter << " ";
	return 0;
}