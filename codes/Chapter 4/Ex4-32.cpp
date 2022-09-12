/**
 *  constexpr int size = 5;
	int ia[size] = { 1, 2, 3, 4, 5 };
	for (int *ptr = ia, ix = 0;
    	ix != size && ptr != ia+size;
    	++ix, ++ptr) {  }
 *
 * 这个循环在遍历数组 ia 指针pter 和整型ix都是起到一个循环计数的功能
/