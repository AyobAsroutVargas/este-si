#ifndef BS_VECTOR_PROBLEM
#define BS_VECTOR_PROBLEM

#include <vector>
#include "problema.h"

class BSVectorProblem : public Problem {
 public:
  BSVectorProblem(std::vector<int> vector, int find);
  ~BSVectorProblem();
  void print();
  int getSize();
  std::vector<int> vector_;
  int find_;
};

#endif