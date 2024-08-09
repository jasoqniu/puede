package Java_Ch05;

public class latihantrycatch4 {
    public static void main(String[] args) 
    {
        try
        {
            int[] arr = new int[10];
            System.out.println(arr[9001]);
        }
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Something went wrong, index out of bound!");
        }
    }
}