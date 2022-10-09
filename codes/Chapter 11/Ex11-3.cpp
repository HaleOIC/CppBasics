#include<string>
#include<set>
#include<iostream>

using namespace std;

int main(){
	string word;
	set<string> exclude = { "the", "but", "and", "an", "or", "a" };

	while ( cin >> word ){
		for ( auto& c : word ) c = tolower(c);
		if ( exclude.find( word ) != exclude.end() ) ++exclude[ word ];
	}

	return 0;
}