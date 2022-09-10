#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1,total;
	while ( cin >> s1 ){
		total += s1;
	}
	cout << total << endl;
	return 0;
}