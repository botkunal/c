
class Box<T> {
	private T content;

	public void add(T item) {
    	this.content = item;
	}

	public T get() {
    	return this.content;
	}
}

public class Main {
	public static void main(String[] args) {
    	// Creating a Box for Integer values
    	Box<Integer> integerBox = new Box<>();
    	integerBox.add(10);
    	int intValue = integerBox.get();
    	System.out.println("Integer value: " + intValue);

    	// Creating a Box for String values
    	Box<String> stringBox = new Box<>();
    	stringBox.add("Hello, World!");
    	String strValue = stringBox.get();
    	System.out.println("String value: " + strValue);
	}
}
