#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	vector<int> v3(10,42); // 有十个元素
	vector<int> v4{10}; // 有一个元素为10
	vector<int> v5{10, 42}; // 有两个元素
	vector<string> v6{10}; // 有十个元素
	vector<string> v7{10, "hi"}; 
	for (auto &c : v5) cout << c << " "; cout << endl;
	for (auto &c : v6) cout << c << " "; cout << endl;
	for (auto &c : v7) cout << c << " ";
	return 0;
}