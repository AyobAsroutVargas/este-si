CXX = g++
CXXFLAGS = -std=c++14 -g -Wall
DEPS =  divide.h solucion.h problema.h mergeSort.h vectorProblem.h vectorSolucion.h generator.h QuickSort.h orderedGenerator.h binarySearch.h BSvectorProblem.h boolSolution.h
OBJ1 = main.o problema.o solucion.o divide.o mergeSort.o vectorProblem.o vectorSolucion.o generator.o QuickSort.o orderedGenerator.o
OBJ2 = p5.o problema.o solucion.o divide.o mergeSort.o vectorProblem.o vectorSolucion.o generator.o QuickSort.o orderedGenerator.o binarySearch.o BSvectorProblem.o boolSolution.o

%.o: %.cc $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

main: $(OBJ1)
	$(CXX) -o $@ $^ $(CXXFLAGS)

p5: $(OBJ2)
	$(CXX) -o $@ $^ $(CXXFLAGS)

.PHONY: clean
clean:
	rm main *.o p5