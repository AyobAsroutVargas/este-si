#ifndef ORDERED_GENERATOR
#define ORDERED_GENERATOR

#include <vector>
#include "mergeSort.h"

class OrderedGenerator {
 public:
  std::vector<int> generateInstance(int size);
  std::vector<int> generateDebugInstance(int size);
};

#endif