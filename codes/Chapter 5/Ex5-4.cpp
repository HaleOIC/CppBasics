/**
 *  while ( string::iterator iter != s.end() ) 
 * 	不能在while语句内定义变量不然会死循环
 *  
 * while ( bool status = find(word)) {   //  }
 * 		if (!status) {}
 * 同上