#include "X.h"
#include "Y.h"
#include "objetoA.cc"
#include "objetoB.cc"
#include "objetoC.cc"
int main(){
  X objetoY = new Y();
  objetoY.foo(new objetoB);
}