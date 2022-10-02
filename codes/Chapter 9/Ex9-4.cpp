bool find( vector<int>::const_iterator begin, vector<int>::const_iterator end, int tval){
	while ( begin ++ != end ){
		if ( *begin == tval ) return true;
	}
	return false;
}