/*
int i = -1, &r = 0;         // 不合法, r 必须引用一个对象
int *const p2 = &i2;        // 合法，常量指针
const int i = -1, &r = 0;   // 合法
const int *const p3 = &i2;  // 合法
const int *p1 = &i2;        // 合法
const int &const r2;        // 不合法, r2 是引用，引用没有顶层 const
const int i2 = i, &r = i;   // 合法

*/