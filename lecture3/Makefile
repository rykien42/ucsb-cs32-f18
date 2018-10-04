#Makefile

CXX = g++
DEPENDENCIES=main.cpp Person.o

main: ${DEPENDENCIES}
	${CXX} -std=c++11 -o $@ $^

Person.o: Person.h Person.cpp
	${CXX} -std=c++11 -c $^

clean: 
	rm -f Person.h.gch Person.o main