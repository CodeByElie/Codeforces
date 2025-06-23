CXX := g++
CXXFLAGS := -Wall -std=c++20

.PHONY: clean

%:
	$(CXX) $(CXXFLAGS) -o main ./Codes/$**/$*.cpp

clean:
	rm -f *.o *.exe *.out
