#include<vector>
#include<string>
#include<iostream>

using namespace std;

int main(){
	vector<char> vec{ 'H', 'e', 'l', 'l', 'o' };
	string s( vec.begin(), vec.end() );
	cout << s << endl;
	return 0;
}