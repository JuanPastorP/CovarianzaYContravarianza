
public class objetoA implements A{

	@Override
	public void fooA() {
		System.out.println("ObjetoA : fooA");
	}
	
	public void foo() {
		fooA();
	}
}
