#include<iostream>
#include<string>
using namespace std;
int main(){
	string tar("hahahahahah");
	auto bs = tar.begin(), es = tar.end();
	while (bs != es){
		*bs = 'X';
		bs = bs + 1;
	}
	cout << tar << endl;
	return 0;
}
/*
显然 for 好用
*/