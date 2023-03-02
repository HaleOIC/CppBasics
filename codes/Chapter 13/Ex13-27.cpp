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
	Hasptr() = default;
	Hasptr(const std::string &s = std::string()) : ps(new std::string(s)), i(0), use(new size_t(1)) {}
	Hasptr(const Hasptr& hp) : ps(new std::string(*hp.ps)), i(hp.i), use(hp.use) { ++*use;}
	Hasptr& operator= (const Hasptr &rval) {
		++*rval.use;
		if (--*use == 0) {
			delete use;
			delete ps;
		}
		ps = rval.ps;
		i = rval.i;
		use = rval.use;
		return *this;
	}
	~Hasptr() {
		if ( --*use == 0 ){
			delete use;
			delete ps;
		}
	}
			
private:
	std::string *ps = nullptr;
	size_t *use = nullptr;
	int i = 0;
};



int main(int argc, char* argv[]){
    return 0;
}

