#include<iostream>
#include<vector>
#include<string> 
using namespace std;

int main(){
	vector<string> text{"cjkasjcjkaslkcascaschashcaschashcas\n","", " shjdias disacjas asc asoc ","as\n" ,"dasdsadass","\n"};
	for ( auto it = text.cbegin();
			it != text.cend() && !it->empty(); ++it ){
		for ( auto &c : *it ){
			auto newC =  static_cast<char>(toupper(c));
			cout << newC;
		}
	}
	return 0;
}