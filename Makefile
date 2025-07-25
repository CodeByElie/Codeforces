CXX := g++
CXXFLAGS := -Wall -std=c++20

.PHONY: clean

%:
	$(CXX) $(CXXFLAGS) -o main ./Codes/$**/$*.cpp

test : 
	$(CXX) $(CXXFLAGS) -o main ./test.cpp
clean:
	rm -f *.o *.exe *.out
