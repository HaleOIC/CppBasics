#include<iostream>
#include<string>
using namespace std;
int main(){
	string tar("this is a string!");
	for (auto &c : tar ){
		c = 'X';
	}
	cout << tar << endl;
	return 0;
}