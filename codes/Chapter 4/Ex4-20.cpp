/**
 * *iter++ 合法 含义是iter先解引用之后 iter的位置加一
 * (*iter)++ 合法 对iter解引用值加一并且返回解引用的值
 * *iter.empty() 先执行iter的成员函数empty()之后对结果解引用
 * iter->empty() 执行iter解引用后得到的对象的成员函数empty()
 * ++*iter 表示 解引用之后得到的值++
 * iter++->empty() 执行iter解引用后得到的对象的成员函数empty()并且之后加一
 /