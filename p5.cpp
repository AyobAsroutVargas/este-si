#include "mergeSort.h"
#include "generator.h"
#include "QuickSort.h"
#include "orderedGenerator.h"
#include "binarySearch.h"

int main(int argc, char **argv) {
  int debug = 0;
  if(argc < 2) {
    std::cout << "Usage: ./main debug(0 no, 1 yes)\n";
    return 0;
  }
  debug = std::atoi(argv[1]);
  std::vector<int> definedVector;
  MergeSort* mergeSort = new MergeSort();
  QuickSort* quickSort = new QuickSort();
  BinarySearch* binarySearch = new BinarySearch();
  RandomVectorGenerator generator;
  OrderedGenerator orderedGenerator;
  std::cout << "\nEscoja el algoritmo a utilizar\n0. Mergesort\n1. Quicksort\n2. Busqueda Binaria\n: ";
  int algorithm = 0;
  std::cin >> algorithm;
  int find = 0;
  switch (debug) {
    case 0:{
      switch (algorithm) {
        case 0: {
          for (int i = 0; i < 5000; i++) {
            definedVector = generator.generateInstance(i);
            VectorProblem* p = new VectorProblem(definedVector);
            VectorSolution* s1 = new VectorSolution();

            clock_t t0 = clock();
            mergeSort->Solve(p,s1);
            long double time0 = (long double)(clock() - t0);

            printf("%14s|%12s|", "instance size", "merge sort:");
            std::cout << "\n";
            printf("%14d|%12Lf|", i, time0 / CLOCKS_PER_SEC);
            std::cout << "\n";
          }
        }
          break;
        case 1: {
          for (int i = 0; i < 5000; i++) {
            definedVector = generator.generateInstance(i);
            VectorProblem* p = new VectorProblem(definedVector);
            VectorSolution* s1 = new VectorSolution();

            clock_t t0 = clock();
            quickSort->Solve(p,s1);
            long double time0 = (long double)(clock() - t0);

            printf("%14s|%12s|", "instance size", "quick sort:");
            std::cout << "\n";
            printf("%14d|%12Lf|", i, time0 / CLOCKS_PER_SEC);
            std::cout << "\n";
          }
        }
          break;
        case 2: {
          std::cout << "Introduzca el numero a buscar: ";
          std::cin >> find;
          for (int i = 0; i < 5000; i++) {
            definedVector = orderedGenerator.generateInstance(i);
            BSVectorProblem* p = new BSVectorProblem(definedVector, find);
            BoolSolution* s = new BoolSolution();

            clock_t t0 = clock();
            binarySearch->Solve(p, s);
            long double time0 = (long double)(clock() - t0);

            printf("%14s|%15s|", "instance size", "binary search:");
            std::cout << "\n";
            printf("%14d|%15Lf|", i, time0 / CLOCKS_PER_SEC);
            std::cout << "\n";
          }
        }
          break;
      }
    }
      break;
    case 1:{
      std::cout << "Introduzca el tamaño de la instancia: ";
      int instanceSize = 0;
      std::cin >> instanceSize;
      switch (algorithm) {
        case 0:{
          definedVector = generator.generateDebugInstance(instanceSize);
          VectorProblem* p = new VectorProblem(definedVector);
          VectorSolution* s1 = new VectorSolution();

          std::cout << "Initial instance:\n";
          p->print();
          std::cout << "\n";

          clock_t t0 = clock();
          mergeSort->Solve(p, s1);
          long double time0 = (long double)(clock() - t0);

          printf("%14s|%12s|", "instance size", "merge sort:");
          std::cout << "\n";
          printf("%14d|%12Lf|", instanceSize, time0 / CLOCKS_PER_SEC);
          std::cout << "\n";

          std::cout << "Solution:\n";
          s1->print();
          std::cout << "\n";
        }
          break;
        case 1:{
          definedVector = generator.generateDebugInstance(instanceSize);
          VectorProblem* p = new VectorProblem(definedVector);
          VectorSolution* s1 = new VectorSolution();

          std::cout << "Initial instance:\n";
          p->print();
          std::cout << "\n";

          clock_t t0 = clock();
          quickSort->Solve(p, s1);
          long double time0 = (long double)(clock() - t0);

          printf("%14s|%12s|", "instance size", "quick sort:");
          std::cout << "\n";
          printf("%14d|%12Lf|", instanceSize, time0 / CLOCKS_PER_SEC);
          std::cout << "\n";

          std::cout << "Solution:\n";
          s1->print();
          std::cout << "\n";
        }
          break;
        case 2:{
          std::cout << "Introduzca el numero a buscar: ";
          std::cin >> find;
          definedVector = orderedGenerator.generateDebugInstance(instanceSize);
          BSVectorProblem* p = new BSVectorProblem(definedVector, find);
          BoolSolution* s = new BoolSolution();

          std::cout << "Initial instance:\n";
          p->print();
          std::cout << "\n";

          clock_t t0 = clock();
          binarySearch->Solve(p, s);
          long double time0 = (long double)(clock() - t0);

          printf("%14s|%15s|", "instance size", "binary search:");
          std::cout << "\n";
          printf("%14d|%15Lf|", instanceSize, time0 / CLOCKS_PER_SEC);
          std::cout << "\n";

          std::cout << "Solution:\n";
          s->print();
          std::cout << "\n";
        }
          break;
      }
    }
      break;
  }

  return 0;
}