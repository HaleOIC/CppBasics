const int v2 = 0; int v1 = v2;
int *p1 = &v1, &r1 = v1;
const int *p2 = &v2, *const p3 = &i, &r2 = v2;
//v2 是顶层const，p2 是底层const，p3 既是顶层const又是底层const，r2 是底层const。