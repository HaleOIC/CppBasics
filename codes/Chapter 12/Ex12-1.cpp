 /**
  * 在此代码的结尾，b1 和 b2 中
  * b1 有 3 个元素
  * b2 没有元素了
  * 
  */

strBlob b1;
{
	strBlob b2 = {"a", "an", "the"};
	b1 = b2;
	b2.push_back( "about" );
}

