/**
 * 局限性在于这个函数无法将常量字符串和字符串字面值作为
 * 该函数的实参
 * 从而需要将这个函数的形参定义为常量引用
 * 
 */
bool is_empty( const string& s){
	return s.empty();
}