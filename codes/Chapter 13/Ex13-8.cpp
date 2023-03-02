/**
 *@file Ex13-5.cpp
 *@author ShineHale
 *@date 2023-03-02
*/

#include <iostream>
#include <string>
#include <vector>
#include <memory>

using namespace std;

class Hasptr{
public:
	Hasptr(const std::string &s = std::string() ):
			ps(new std::string(s)), i(0) {}
	
	Hasptr(const Hasptr& hp) : ps(new std::string(*hp.ps)), i(hp.i) {}

	Hasptr& operator= (const Hasptr &rhs_rp) {
		if ( this != &rhs_rp ) {
			std::string *temp_ps = new string(*rhs_rp.ps);
			delete ps;
			ps = temp_ps;
			i = rhs_rp.i;
		}
		return *this;
	}
			
private:
	std::string *ps;
	int i;
};



int main(int argc, char* argv[]){
    return 0;
}

