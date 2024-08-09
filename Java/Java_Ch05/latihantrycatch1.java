
import java.util.*;

public class latihantrycatch1 {
    public static void main(String[] args) 
    {
        Scanner s = new Scanner(System.in);
        while(true)
        {
            try
        {
            System.out.print("Masukkan angka = ");
            boolean prime= true;
            int num = s.nextInt();
            for(int a=2;a<=Math.sqrt(num);a++)
                {
                    if(num%a==0)
                    {
                        prime=false;
                        break;
                    }
                }
                if(prime)
                {
                    System.out.println("Prima");
                }
                else
                {
                    System.out.println("Bukan prime");
                }
                break;
        }
        catch(Exception e)
        {
            System.out.println("Anda bukan memasukkan angka !");
            String temp = s.nextLine();
        }
        }
    }
}
