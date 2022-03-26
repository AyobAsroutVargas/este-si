#include "BSvectorProblem.h"

BSVectorProblem::BSVectorProblem(std::vector<int> vector, int find) {
  vector_.assign(vector.begin(), vector.end());
  find_ = find;
}

BSVectorProblem::~BSVectorProblem(){
  
}
int BSVectorProblem::getSize(){
  return vector_.size();
}

void BSVectorProblem::print(){
  for (auto element : vector_) {
    std::cout << element << ", ";
  }
  std::cout << "\nSearching for: " << find_ << "\n";
}