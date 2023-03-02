src= $(wildcard ./*.cpp)
exe = $(patsubst ./%.cpp, ./%, $(src))

myArgs = -Wall -g 

ALL:$(exe)

$(exe):./%:./%.cpp
	g++ -std=c++20 $< -o $@ $(myArgs)

clean:
	-rm -rf $(exe) 


.PHONY: ALL clean

