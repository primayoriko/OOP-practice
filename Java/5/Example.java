import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Stream;

public class Example {

	public static void main(String[] args) {
		// example1();
		// example2();
		// example3();
		// example4();
		// example5();
		example7();
	}
	
	static void example1() {
		// Create an ArrayList
		List<Integer> myList = new ArrayList<Integer>();
		myList.add(1);
		myList.add(5);
		myList.add(8);
		
		// Convert it into a Stream
		Stream<Integer> myStream = myList.stream();
		
        	// Print the contents of the stream
		myStream.forEach(e -> System.out.println(e));
	}
	
	static void example2() {
		// Create an array
		Integer[] myArray = {1, 5, 8};

		// Convert it into a Stream
		Stream<Integer> myStream = Arrays.stream(myArray);
		
        	// Print the contents of the stream
		myStream.forEach(e -> System.out.println(e));
	}
	
	static void example3() {
		String[] myArray = new String[]{"bob", "alice", "paul", "ellie"};
		Stream<String> myStream = Arrays.stream(myArray);
		
		Stream<String> myNewStream = 
	             myStream.map(s -> s.toUpperCase());
		
		String[] myNewArray =
	             myNewStream.toArray(String[]::new);

        	// Print the contents of the new array		
		for(String s:myNewArray)
			System.out.println(s);
	}
	
	static void example4() {
		String[] myArray = new String[]{"bob", "alice", "paul", "ellie"};
		
		String[] myNewArray = Arrays.stream(myArray)
	      			.filter(s -> s.length() > 4)
	      			.toArray(String[]::new);
		
        	// Print the contents of the new array
		for(String s:myNewArray)
			System.out.println(s);
	}
	
	static void example5() {
		int myArray[] = { 1, 5, 8 };
		int sum = Arrays.stream(myArray).sum();

        	// Print the sum
		System.out.println(sum);
	}
	
	static void example6() {
		String[] myArray = { "this", "is", "a", "sentence" };
		String result = Arrays.stream(myArray)
		                .reduce("", (a,b) -> a + b);
		
        	// Print the result
		System.out.println(result);
    }
    
    static void example7(){
        List<Integer> numbers = Arrays.asList(1, 2, 3);
        int result = numbers
        .stream()
        .reduce(0, (subtotal, element) -> subtotal*3 + element);
        System.out.println(result);
    }

}