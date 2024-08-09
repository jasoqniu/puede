import java.util.*;
public class forloop {
    public static void main(String[] args) {
        System.out.print("Batas = ");
        Scanner s = new Scanner(System.in);
        int num = s.nextInt();

        int fctrl=1;
        for(int a=1;a<=num;a++)
        {
            int num1=num;
            fctrl = fctrl * a;

        }
         System.out.print("Factorial =  " + fctrl);
    }
}
