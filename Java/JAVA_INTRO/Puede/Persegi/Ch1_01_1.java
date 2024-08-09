package Persegi;
//tugas persegi
import java.util.*;
import java.util.Scanner;
public class Ch1_01_1
{
    public static void main(String args[])
    {
        System.out.println("hitung luas dan keliling persegi");
        System.out.println("Sisi");
        Scanner s = new Scanner(System.in);
        int sisi=s.nextInt();
        int luas = sisi * sisi;
        int keliling = sisi * 4;
        System.out.println("Luas = "+luas);
        System.out.println("keliling = "+keliling);
    }
}