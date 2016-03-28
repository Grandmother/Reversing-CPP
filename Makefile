all: testA.1 testA.4 testA.5

testA.1: testA.1.cpp
	g++ -std=c++11 testA.1.cpp -o testA.1

testA.4: testA.4.cpp
	g++ -std=c++11 testA.4.cpp -o testA.4

testA.5: testA.5.cpp
	g++ -std=c++11 testA.5.cpp -o testA.5
