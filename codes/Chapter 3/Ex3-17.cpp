#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	string newRead;
	vector<string> V;
	while ( cin >> newRead ) V.push_back(newRead);
	for ( auto &c : V ) {
		for (auto &ch : c)  ch = toupper(ch);
		cout << c << endl;
	}
	return 0;
}