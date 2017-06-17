# This is a comment line
# Sample makefile for fraction class

callbackserial: main.o AsyncSerial.o
	g++ AsyncSerial.o main.o -o callbackserial -lboost_system -lboost_thread

main.o: main.cpp AsyncSerial.cpp AsyncSerial.h
	g++ -c -I /usr/include/boost main.cpp

AsyncSerial.o: AsyncSerial.cpp AsyncSerial.h main.cpp
	g++ -c -I /usr/include/boost AsyncSerial.cpp

clean:
	rm *.o frac
