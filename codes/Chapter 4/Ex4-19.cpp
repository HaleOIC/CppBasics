#include<iostream>
#include<vector>
using namespace std;
int main(){
	ptr != 0 && *ptr++  // 判断ptr是不是空指针，之后对ptr指针进行++并且返回加一前的ptr解引用
	ival++ && ival // 先 判断 ival的值 之后ival+1 如果之前的ival 的值是真的则继续检测+1之后的ival的值
	vec[ival++] <= vec[ival] // 不正确的因为无法判断那个先进行计算，是未定义的
	vec[ival] <= vec[ival+1]; // 正确的
	return 0;
}