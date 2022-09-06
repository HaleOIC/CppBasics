#include<iostream>
int main(){
	int *ip,i, &r = i;
	int i, *ip = 0;
	int* ip, ip2;
}
/*
(a): ip 是一个指向 int 的指针, i 是一个 int, r 是 i 的引用。
(b): i 是 int , ip 是一个空指针。
(c): ip 是一个指向 int 的指针, ip2 是一个 int。
*/