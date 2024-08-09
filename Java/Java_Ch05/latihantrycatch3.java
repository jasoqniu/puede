package Java_Ch05;

public class latihantrycatch3 {
    public static void main(String[] args)
      {
        try
        {
            System.out.println(1/0);
        }
        catch(ArithmeticException e)
        {
            System.out.println("Error: Cannot divide integer by 0");
        }
      }
}
