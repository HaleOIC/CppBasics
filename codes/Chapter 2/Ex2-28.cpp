int i, *const cp;       // 不合法, const 指针必须初始化
int *p1, *const p2;     // 不合法, const 指针必须初始化
const int ic, &r = ic;  // 不合法, const int 必须初始化
const int *const p3;    // 不合法, const 指针必须初始化
const int *p;           // 合法. 一个指针，指向 const int