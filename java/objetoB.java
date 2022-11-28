
public class objetoB implements B{

	@Override
	public void fooA() {
		System.out.println("ObjetoB : fooA");
	}

	@Override
	public void fooB() {
		System.out.println("ObjetoB : fooB");
	}
	
	public void foo() {
		fooA();
		fooB();
	}
}
