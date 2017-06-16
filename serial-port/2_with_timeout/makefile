# This is a comment line
# Sample makefile for fraction class

timeoutserial: main.o TimeoutSerial.o
	g++ TimeoutSerial.o main.o -o timeoutserial -lboost_system

main.o: main.cpp TimeoutSerial.cpp TimeoutSerial.h
	g++ -c -I /usr/include/boost main.cpp

TimeoutSerial.o: TimeoutSerial.cpp TimeoutSerial.h main.cpp
	g++ -c -I /usr/include/boost TiemoutSerial.cpp

clean:
	rm *.o frac
