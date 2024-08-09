package Tukar_isi_variabel;


import java.util.*;
public class Ch1_01_04
{
    public static void main(String[] args)
    {
        Scanner s = new Scanner(System.in);
        System.out.println("Bilangan 1 = ");
        int b1 = s.nextInt();
        System.out.println("Bilangan 2 = ");
        int b2 = s.nextInt();
        int temp = b1;
        b1=b2;
        b2=temp;

        System.out.println("Setelah ditukar");
        System.out.println("Bilangan 1 = "+b1);
        System.out.println("Bilangan 1 = "+b2);
    }
}