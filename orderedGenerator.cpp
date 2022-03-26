#include "orderedGenerator.h"

std::vector<int> OrderedGenerator::generateInstance(int size) {
  std::vector<int> randomVector(size, 0);
  srand((unsigned) time(NULL));
  for (int i = 0; i < size; i++) {
    randomVector[i] = rand();
  }
  VectorProblem* p = new VectorProblem(randomVector);
  VectorSolution* s = new VectorSolution();
  MergeSort* mergeSort = new MergeSort();
  mergeSort->Solve(p, s);

  std::vector<int> result = ((VectorSolution*)s)->vector_;
  return result;
}

std::vector<int> OrderedGenerator::generateDebugInstance(int size) {
  std::vector<int> randomVector(size, 0);
  srand((unsigned) time(NULL));
  for (int i = 0; i < size; i++) {
    randomVector[i] = rand() % 1000;
  }
  VectorProblem* p = new VectorProblem(randomVector);
  VectorSolution* s = new VectorSolution();
  MergeSort* mergeSort = new MergeSort();
  mergeSort->Solve(p, s);

  std::vector<int> result = ((VectorSolution*)s)->vector_;
  return result;
}