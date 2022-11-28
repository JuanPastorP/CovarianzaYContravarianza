#include "X.h"
#include "Y.h"
#include "objetoA.h"
#include "objetoB.h"
#include "objetoC.h"
int main(){
  X* objetoY = new Y();
  objetoC* nuevo = new objetoC();
  objetoY->foo(nuevo);
}   