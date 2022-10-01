#include<string>

class employee{
private:
	std::string _name;
	unsigned _ID;
	double _wages;
	std::string _timeLimit;		//合同到期时间
	std::string _position;
public:
	employee(const std::string& name, const unsigned& ID, 
		const double& wages, const std::string& timeLimit, const std::string& position ):
	_name(name), _ID(ID), _wages(wages), _timeLimit(timeLimit), _position(position) {}



	employee() : employee( "", 0, 0.0, "", "" ) {}
	employee( const std::string& name ) : employee( name, 0, 0.0, "", "" ) {}
	employee( const std::string& name, const double& wages ) : employee( name, 0, wages, "", "" ) {}
};