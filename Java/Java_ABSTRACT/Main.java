import java.util.*;
public class Main {
    public static void main(String[] args)
    {

        Harimau harimau = null;
        Elang elang = null;
        Katak katak = null;

        Scanner a = new Scanner (System.in);

        int pilihan = 0;

        boolean adaBinatang = false;

        while (pilihan != 4) {

            System.out.println("Menu Kebun Binatang : ");
            System.out.println("1. Create Binatang   ");
            System.out.println("2. Dengar Suara   ");
            System.out.println("3. Info Binatang   ");
            System.out.println("4. Exit   ");
            System.out.println("--Choose--  ");

            pilihan = a.nextInt();

            if (pilihan == 1)
            {

                System.out.println("Pilih Binatang : ");
                System.out.println("1. Harimau  ");
                System.out.println("2. Elang   ");
                System.out.println("3. Katak ");
                System.out.println("--Choose--  ");

                int cek = a.nextInt();

                String neutral = a.nextLine();

                System.out.println("Nama =   ");
                String nama = a.nextLine();

                System.out.println("Lokasi =   ");
                String lokasi = a.nextLine();

                System.out.println("Makanan =  ");
                String makanan = a.nextLine();

                System.out.println("Berat =  ");
                int berat = a.nextInt();

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
            else if (pilihan == 2)
            {
                System.out.println("Pilih Binatang : ");
                System.out.println("1. Harimau  ");
                System.out.println("2. Elang   ");
                System.out.println("3. Katak ");
                System.out.println("--Choose--  ");

                int cek = a.nextInt();

                if (cek == 1)
                {
                    harimau.suara();
                }
                else if (cek == 2)
                {
                    elang.suara();
                }
                else if (cek == 3)
                {
                    katak.suara();
                }
            }

            else if (pilihan == 3 && adaBinatang == true)
            {

                System.out.println("Pilih Binatang : ");
                System.out.println("1. Harimau  ");
                System.out.println("2. Elang   ");
                System.out.println("3. Katak ");
                System.out.println("--Choose--  ");

                int cek = a.nextInt();

                if (cek == 1)
                {
                    harimau.introduce();
                }
                else if (cek == 2)
                {
                    elang.introduce();
                }
                else if (cek == 3)
                {
                   katak.introduce();
                }

            }
        }
    }
}
