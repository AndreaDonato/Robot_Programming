CXX = g++
CXXFLAGS = -std=c++20 -O3 -Wall

.phony: clean all

all:	bash_test


lib.o:		lib.cpp lib.hpp
	$(CXX) $(CXXFLAGS) -c -o lib.o lib.cpp

other_lib.o:	other_lib.cpp other_lib.hpp
	$(CXX) $(CXXFLAGS) -c -o other_lib.o other_lib.cpp

bash.o:	bash.cpp other_lib.hpp lib.hpp
	$(CXX) $(CXXFLAGS) -c -o bash.o bash.cpp

OBJS=lib.o other_lib.o bash.o

bash_test:	lib.o other_lib.o bash.o
		$(CXX) $(CXXFLAGS) -o bash_test lib.o other_lib.o bash.o

clean:	
	rm -rf *.o
