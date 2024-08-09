import java.util.*;
public class gaji {
    public static void main(String[] args) {
        System.out.print("Gaji = ");
        Scanner s = new Scanner(System.in);
        int gaji = s.nextInt();

        int ratus=0;
        int limapuluh=0;
        int duapuluh=0;
        int sepuluh=0;
        int lima=0;
        int dua=0;
        int satu=0;

        while(gaji>=100000)
        {
            gaji = gaji - 100000;
            ratus++;
        }
        while(gaji>=50000)
        {
            gaji = gaji - 50000;
            limapuluh++;
        }
        while(gaji>=20000)
        {
            gaji = gaji - 20000;
            duapuluh++;
        }
        while(gaji>=10000)
        {
            gaji = gaji - 10000;
            sepuluh++;
        }
        while(gaji>=5000)
        {
            gaji = gaji - 5000;
            lima++;
        }
        while(gaji>=2000)
        {
            gaji = gaji - 2000;
            dua++;
        }
        while(gaji>=1000)
        {
            gaji = gaji - 1000;
            satu++;
        }

        System.out.println("100.000 = " + ratus + " lembar");
        System.out.println("50.000 = " + limapuluh + " lembar");
        System.out.println("20.000 = " + duapuluh + " lembar");
        System.out.println("10.000 = " + sepuluh + " lembar");
        System.out.println("5.000 = " + lima + " lembar");
        System.out.println("2.000 = " + dua + " lembar");
        System.out.println("1.000 = " + satu + " lembar");

    }
}
