package Persegi_Panjang;

import java.util.*;
public class Ch1_01_02
{
    public static void main(String args[])
    {
        System.out.println("Panjang");
        Scanner s1 = new Scanner(System.in);
        int panjang = s1.nextInt();
        System.out.println("Lebar");
        Scanner s2 = new Scanner(System.in);
        int lebar = s2.nextInt();
        int luas = panjang*lebar;
        int keliling = (panjang*2) + (lebar * 2);
        System.out.println("Luas = "+luas);
        System.out.println("Keliling = "+keliling);
    }
}