#ifndef BINARY_SEARCH
#define BINARY_SEARCH

#include "divide.h"
#include "BSvectorProblem.h"
#include "boolSolution.h"

class BinarySearch : public Framework {
 public:
  BinarySearch();
  ~BinarySearch();

  bool isSmall(Problem* p);
  std::pair<Problem*,Problem*> Divide(Problem* p);
  void SolveSmall(Problem* p, Solution* s);
  void combine(std::pair<Solution*, Solution*> subSolutions, Solution* s);
  std::string getA();
  std::string getB();
  std::string getC();
 private:
};

#endif