import java.util.Scanner;

public class kotak_loop {
    public static void main(String[] args) {
        System.out.print("Batas = ");
        Scanner s = new Scanner(System.in);
        int x = s.nextInt();
        for(int a=1;a<=x;a++)
        {
            for(int b=1;b<=x;b++)
            {
                if(a==1||a==x||b==1||b==x)
                {
                    System.out.print("*");
                }
            }
        }
    }
}
