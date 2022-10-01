/**
 * 假如我们有一个这样的函数：
 * 
 * 
 * int getSize(const std::vector<int>&);
 * 
 * 
 * 
 * 如果vector没有将单参数构造函数定义成explicit的，我们就可以这样调用：
 * getSize(34);
 * 
 * 很明显这样调用会让人困惑，函数实际上会初始化一个拥有34个元素的vector的临时量，然后返回34。但是这样没有任何意义。
 * 而string则不同，string的单参数构造函数的参数是const char *
 * 因此凡是在需要用到string的地方都可以用 const char *来代替（字面值就是const char *）。如：
 * void print(std::string);
 * print("hello world");
 * 
 */
 