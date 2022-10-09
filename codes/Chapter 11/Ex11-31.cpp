#include<string>
#include<map>
#include<iostream>
#include<vector>

using namespace std;


int main(){
	multimap< string, string > authors{
		{ "alan", "DMA" },
		{ "pezy", "Leetcode" },
		{ "alan", "CLRS" },
		{ "Jack Ma", "Ali"},
		{ "pezy", "CP5" },
	};

	string author = "pezy";
	string work = "CP5";

	auto found = authors.find( author );
	auto count = authors.count( author );
	while ( count ){
		if ( found -> second == work ){
			authors.erase( found );
			break;
		}
		++found;
		--count;
	}
	for (const auto &author : authors)
		std::cout << author.first << " " << author.second << std::endl;

	return 0;
}
