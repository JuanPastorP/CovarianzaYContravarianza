public class Y extends X{
	
/*  public B foo(B test){
		test.fooB();
        return new objetoB();
    }
*/
// Se puede ver que esta funcionando correctamente
	
/* 	public A foo(B test){
		test.fooB();
		return new objetoA();
	}
*/
/* Contravarianza al retorno de A no lo permite error:
./Y.java:10: error: foo(B) in Y cannot override foo(B) in X
public A foo(B test){
         ^
return type A is not compatible with B
1 error
*/
	
/*	public C foo(B test){
		test.fooB();
		return new objetoC();
	}*/
// Si permite covarianza en el rentorno de C
	
/* 	@Override
	public B foo(A test){
		test.foo();
		return new objetoA();
	}
*/
//No permite contravarianza en el argumento del tipo A error:
/*
 Exception in thread "main" java.lang.Error: Unresolved compilation problem: 
The method foo(B) in the type X is not applicable for the arguments (objetoA)

at main.main(main.java:5)
 */

	@Override
	public B foo(C test){
		test.fooA();
		test.fooB();
		test.fooC();

		return new objetoC();
	}
	
//No se permite covarianza al enviar C

	
}

