import java.util.*;

public class TestDrive 
{
    public static void main(String[] args) 
    {
        Harimau harimau = null;
        Elang elang = null;
        Kodok kodok = null;
        Scanner s = new Scanner(System.in);
        int p = 0;
        while(p!=4)
        {
            System.out.println("Menu Kebun Binatang : ");
            System.out.println("1. Create Binatang   ");
            System.out.println("2. Dengar Suara   ");
            System.out.println("3. Info Binatang   ");
            System.out.println("4. Exit   ");
            System.out.print("--Choose--  ");

            p =  s.nextInt();
            if(p==1)
            {
                System.out.println("Pilih Binatang : ");
                System.out.println("1. Harimau  ");
                System.out.println("2. Elang   ");
                System.out.println("3. Katak ");
                System.out.println("--Choose--  ");

                int cek = s.nextInt();

                String neutral = s.nextLine();

                System.out.println("Nama =   ");
                String nama = s.nextLine();

                System.out.println("Lokasi =   ");
                String lokasi = s.nextLine();

                System.out.println("Makanan =  ");
                String makanan = s.nextLine();

                System.out.println("Berat =  ");
                int berat = s.nextInt();

                if (cek == 1)
                {
                    harimau = new Harimau(nama,lokasi,makanan,berat);
                }
                else if (cek == 2)
                {
                    elang = new Elang(nama,lokasi,makanan,berat);
                }
                else if (cek == 3)
                {
                    katak = new Katak(nama,lokasi,makanan,berat);
                }

                System.out.println("Binatang berhasil dibuat !");
                adaBinatang = true;
            }
        }
    }
}
