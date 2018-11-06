# Makefile

CXX=g++
DEPENDENCIES=main.o tddFuncs.o student.o person.o

main: ${DEPENDENCIES}
	${CXX} -o $@ -std=c++11 $^

clean: 
	rm -f *.o main