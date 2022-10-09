#include<string>
#include<map>
#include<vector>
#include<iostream>

using namespace std;

int main(){

	map< string, vector<pair<string, string>> >  mp;
	string firstName, lastName, birthday;
	while ( cin >> firstName >> lastName >> birthday ){
		mp[ lastName ].push_back( {firstName, birthday} );
	}
	return 0;
}
