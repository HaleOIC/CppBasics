#include<string>
#include<map>
#include<vector>
#include<iostream>

using namespace std;

int main(){

	map< string, vector<string> >  mp;
	string firstName, lastName;
	while ( cin >> firstName >> lastName ){
		mp[ lastName ].push_back( firstName );
	}
	return 0;
}
