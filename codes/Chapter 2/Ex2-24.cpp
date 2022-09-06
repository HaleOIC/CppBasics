#include<iostream>
int main(){
	int i = 42;
	void *p = &i;
	// while the void is a arbitary pointer and it can point to any type 
	//long *lp = &i;  long pointer can not point to the interger
	return 0;
}