#ifndef BOOL_SOLUTION
#define BOOL_SOLUTION


#include "solucion.h"

class BoolSolution : public Solution {
 public:
  BoolSolution();
  ~BoolSolution();
  void print();
  Solution* getInstance();
  bool bool_ = false;
};

#endif