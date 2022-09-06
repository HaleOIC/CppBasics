r1 = v2; // 合法, 顶层const在拷贝时不受影响
p1 = p2; // 不合法, p2 是底层const，如果要拷贝必须要求 p1 也是底层const
p2 = p1; // 合法, int* 可以转换成const int*
p1 = p3; // 不合法, p3 是一个底层const，p1 不是
p2 = p3; // 合法, p2 和 p3 都是底层const，拷贝时忽略掉顶层const