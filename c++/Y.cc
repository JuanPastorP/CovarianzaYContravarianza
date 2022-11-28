#include "Y.h"
#include "objetoA.h"
#include "objetoC.h"
/*B* Y::foo(B* test){
    test->fooB();
    objetoB* prueba = new objetoB();
    return prueba;
}*/
C* Y::foo(B* test){    
    objetoC* prueba = new objetoC();
    prueba->fooC();
    return prueba;
}
// Si permite covarianza de al retornar C*
