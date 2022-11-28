public class Y extends X{
	
/*    public B foo(B test){
		test.fooB();
        return new objetoB();
    }
}*/
// Se puede ver que esta funcionando correctamente
	
	public A foo(B test){
		test.fooB();
		return new objetoA();
		}
    }
/* No lo permite error:
./Y.java:10: error: foo(B) in Y cannot override foo(B) in X
public A foo(B test){
         ^
return type A is not compatible with B
1 error
*/
