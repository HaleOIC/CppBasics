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
private:
	std::string *ps;
	int i;
};



int main(int argc, char* argv[]){
    return 0;
}

