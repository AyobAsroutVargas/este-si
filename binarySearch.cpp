#include "binarySearch.h"

BinarySearch::BinarySearch(){
    
}

BinarySearch::~BinarySearch(){
    
}

bool BinarySearch::isSmall(Problem* p){
  return (p->getSize() == 1);
}


std::pair<Problem*,Problem*> BinarySearch::Divide(Problem* p){
  int middlePos = ((BSVectorProblem*)p)->vector_.size() / 2;
  int middle = ((BSVectorProblem*)p)->vector_[middlePos];
  std::pair<Problem*,Problem*> subProblems;
  int find = ((BSVectorProblem*)p)->find_;
  
  if (middle == find) {
    std::vector<int> v1;
    std::vector<int> v2;
    v1.push_back(middle);
    v2.push_back(middle);
    subProblems.first = new BSVectorProblem(v1, find);
    subProblems.second = new BSVectorProblem(v2, find);
  } else if(find < middle) {
    std::vector<int> v1(((BSVectorProblem*)p)->vector_.cbegin(), ((BSVectorProblem*)p)->vector_.cbegin() + middlePos - 1);
    std::vector<int> v2;
    v2.push_back(middle);
    subProblems.first = new BSVectorProblem(v1, find);
    subProblems.second = new BSVectorProblem(v2, find);
  } else {
    std::vector<int> v1(((BSVectorProblem*)p)->vector_.cbegin() + middlePos + 1, ((BSVectorProblem*)p)->vector_.cend());
    std::vector<int> v2;
    v2.push_back(middle);
    subProblems.first = new BSVectorProblem(v1, find);
    subProblems.second = new BSVectorProblem(v2, find);
  }

  return subProblems;
}


void BinarySearch::SolveSmall(Problem* p, Solution* s){
  int element = ((BSVectorProblem*)p)->vector_[0];
  int find = ((BSVectorProblem*)p)->find_;
  if(find == element) {
    ((BoolSolution*)s)->bool_ = true;
  } else {
    ((BoolSolution*)s)->bool_ = false;
  }
}


void BinarySearch::combine(std::pair<Solution*, Solution*> subSolutions, Solution* s){
  ((BoolSolution*)s)->bool_ =(((BoolSolution*)subSolutions.first)->bool_ || ((BoolSolution*)subSolutions.second)->bool_);
}


std::string BinarySearch::getA(){
    
}
std::string BinarySearch::getB(){
    
}
std::string BinarySearch::getC(){
    
}