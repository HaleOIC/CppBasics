/*

The way decltype handles top-level const and references differs subtly from the way auto does. 
Another important difference between decltype and auto is that 
the deduction done by decltype depends on the form of its given expression.
so the key of difference is subtly and form.

*/
#include<iostream>
int main(){
	int i = 0, &r = i;
	auto a = i;
	decltype(i) b = i;
	auto c = r;
	decltype(r) d = r;
	// c is a int while d is a int&.
}