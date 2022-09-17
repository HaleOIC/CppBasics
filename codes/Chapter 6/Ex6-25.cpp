#include<iostream>
#include<string>
using namespace std;
int main(int argc, char **argv){
	string s1(argv[0]);
	string s2(argv[1]);
	cout << s1 + s2 << endl;
	return 0;
}