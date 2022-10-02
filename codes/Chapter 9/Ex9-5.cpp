vector<int>::const_iterator find( vector<int>::const_iterator begin, vector<int>::const_iterator end, int tval ){
	while ( begin != end ){
		if ( *begin == tval ) return begin;
		++begin;
	}
	return end;
}