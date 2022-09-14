#include<iostream>
#include"Chapter6.h"


int fact(const int& tar){
	int ans = 1; 	
	for ( auto i = 2; i <= tar; i++ )
		ans = ans * i;
	return ans;
}

int func(){
	return 2147483641;
}