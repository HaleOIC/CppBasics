#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<int> v1; // 没有元素
	vector<int> v2(10); // 有十个元素
	vector<int> v3(10,42); // 有十个元素
	vector<int> v4{10}; // 有一个元素为10
	vector<int> v5{10, 42}; // 有两个元素
	vector<string> v6{10}; // 有十个元素
	vector<string> v7{10, "hi"}; // 有十个元素并且都是"hi";
	return 0;
}