#ifndef GENERATOR
#define GENERATOR

#include <vector>
#include <cstdlib>
#include <ctime>

class RandomVectorGenerator {
 public:
  std::vector<int> generateInstance(int size);
  std::vector<int> generateDebugInstance(int size);
};

#endif