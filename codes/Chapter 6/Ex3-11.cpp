#include<string>
#include<iostream>
using namespace std;
int main(){
	const string s = "Keep out!";
	for (auto &c : s) {/* ... */}
	return 0;
}
/* 合法 c 的类型是 const char &*/