#include "boolSolution.h"

BoolSolution::BoolSolution(){

}
BoolSolution::~BoolSolution(){

}
void BoolSolution::print(){
  std::string output = (bool_) ? "true" : "false";
  std::cout << output << "\n";
}
Solution* BoolSolution::getInstance(){
  return new BoolSolution();
}