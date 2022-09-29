class employee{
private:
	std::string _name;
	unsigned _ID;
	double _wages;
	std::string _timeLimit;		//合同到期时间
	std::string _position;
public:
	employee() = default;
	employee(const std::string& name, const unsigned& ID, 
		const double& wages, const std::string& timeLimit, const std::string& position ):
	_name(name), _ID(ID), _wages(wages), _timeLimit(timeLimit), _position(position) {}
	employee( const std::string& name ) : _name(name) {}
	employee( const std::string& name, const double& wages ) : _name(name), _wages(wages) {}
};