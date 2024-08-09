public class Puede 
{

	public static < E > void printArray( E[] inputArray ) {
      
		for(E element : inputArray) {
			System.out.printf("%s ", element);
		}
		System.out.println();
	}


    public static void main(String[] args) {
       
      Integer[] intArray = { 1, 2, 3, 4, 5 };
      Double[] doubleArray = { 1.1, 2.2, 3.3, 4.4 };
      Character[] charArray = { 'H', 'E', 'L', 'L', 'O' };

      System.out.print("Array integer :");
      printArray(intArray);   // pass an Integer array

      System.out.print("\nArray double :");
      printArray(doubleArray);   // pass a Double array

      System.out.print("\nArray character :");
      printArray(charArray);   // pass a Character array
    }

}
