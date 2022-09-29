struct X
{
public:
	X( int i, int j ) : rem ( base % j ), base(i)  {}
private:
	int rem, base;
};