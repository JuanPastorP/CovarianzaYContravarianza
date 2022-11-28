#include "X.h"
#include "Y.h"
#include "objetoA.h"
#include "objetoB.h"
#include "objetoC.h"
int main(){
  X* objetoY = new Y();
  objetoB* nuevo = new objetoB();
  objetoY->foo(nuevo);
}   