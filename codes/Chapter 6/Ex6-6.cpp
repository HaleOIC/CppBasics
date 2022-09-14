/**
 * 形参属于局部变量，局部变量中包含形参，但是局部静态变量就是在函数过程中定义的类似
 * 全局变量的变量，它的生命周期要超过函数本身的声明周期，直到程序中止时才销毁。
*/
#include<iostream>
#include<string>

using namespace std;

int f ( const int & val ){
	static int sum = 0;
	int tot = 0;
	if ( val > 0 ) ++sum, ++tot;
	cout << tot << endl << sum << endl;
	return 1;
}

int main(){
	int x; cin >> x;
	cout << x << endl;
	f( x );
	f( x );
	
	return 0;
}