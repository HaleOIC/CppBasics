/**
 * 这个代码不更改同样可以运行
 * 但是更好的话改成如下所示
 */
void print(const int ia[10]){
	for (size_t i = 0; i != 10; ++i )
		cout << ia[i] << endl;
}

void print(const int (&ia)[10]){
	for (size_t i = 0; i != 10; ++i )
		cout << ia[i] << endl;
}