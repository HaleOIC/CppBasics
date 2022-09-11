#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	string readString;
	vector<string> V;
	while ( cin >> readString ){
		V.push_back(readString);
	}
	return 0;
}