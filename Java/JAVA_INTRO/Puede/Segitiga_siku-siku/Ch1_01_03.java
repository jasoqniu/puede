import java.util.*;
public class Ch1_01_03
{
    public static void main(String args[])
    {
        System.out.println("Alas");
        Scanner s = new Scanner(System.in);
        int alas = s.nextInt();
        System.out.println("Tinggi");
        int tinggi = s.nextInt();

        double miring = Math.sqrt(alas * alas + tinggi * tinggi);
        System.out.println("Sisi miring = "+miring);
    }
}