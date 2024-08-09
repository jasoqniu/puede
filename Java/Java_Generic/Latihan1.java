import java.util.Comparator;

class Latihan1 
{
    public static <T> void printArr(T[] inputArr)
    {
        for(T element : inputArr)
        {
            System.out.print(element + " ");
        }
        System.out.println();
    }

    public static < E > void sort(E[] ar, Comparator < E > comparator)
    {
        E swap;
        for(int a=0;a<ar.length;a++)
        {
            for(int b=0;b<ar.length-1;b++)
            {
                if(comparator.compare(ar[b],ar[b+1])<0)
                {
                    swap=ar[b];
                    ar[b]=ar[b+1];
                    ar[b+1]=swap;
                }
            }
        }
        printArr(ar);
    }

    public static void main(String[] args) {
    Integer[] intArr = {3, 1, 4, 1, 5};
    Double[] doubleArr = {3.1, 4.1, 5.9, 2.6, 5.3};
    Character[] charArr = {'b', 'c', 'a', 'd', 'e'};

    System.out.println("Array intarr contains");
    sort(intArr, Comparator.naturalOrder());

    System.out.println("Array doublearr contains");
    sort(doubleArr, Comparator.naturalOrder());

    System.out.println("Array stringarr contains");
    sort(charArr, Comparator.naturalOrder());
}

}



/* 
class Ideone
{
	 public static < Puede > void printArray( Puede[] inputArray ) 
     {
      // Display array elements
      for(Puede element : inputArray) 
      {
         //System.out.printf("%s ", element);
          System.out.print(element + " ");
      }
      System.out.println();
    }
    
	public static <E> void sort(E[] ar, Comparator<E> comparator)
    {
        E swap;

        for (int i = 0; i < ar.length; i++) 
        {
            for (int j = 0; j < ar.length - 1; j++) 
            {
                if (comparator.compare(ar[j], ar[j + 1]) < 0) 
                {
                    swap = ar[j];
                    ar[j] = ar[j + 1];
                    ar[j + 1] = swap;
                }
            }
        }
        printArray(ar);   // pass an Integer array
    }
	
	public static void main (String[] args) throws java.lang.Exception
	{
		Integer[] intArray = { 8, 2, 9, 1, 5 };
        Double[] doubleArray = { 9.1, 2.2, 3.3, 1.5, 7.5 };
        Character[] charArray = { 'H', 'E', 'L', 'L', 'O' };

        System.out.println("Array integerArray contains:");
        sort(intArray, Comparator.naturalOrder());
        

        System.out.println("\nArray doubleArray contains:");
        sort(doubleArray, Comparator.naturalOrder());
	}
}
*/