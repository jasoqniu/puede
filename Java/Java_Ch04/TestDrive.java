//TestDrive.java

/* 
import java.util.*;
public class TestDrive {

    
}
*/


/* 
import java.util.*;
public class TestDrive {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        Club club = null;
        int index=1;
        while(true)
        {
            System.out.println("Menu Klub");
            System.out.println("1.Create Klub");
            System.out.println("2.Add Coach");
            System.out.println("3.Add Player");
            System.out.println("4.View Club");
            System.out.println("5.Exit");
            int input = s.nextInt();
            s.nextLine();

            if(input==1)
            {
                System.out.println("--------------------------------------");
                System.out.println("Membuat Klub Baru");
                System.out.println("--------------------------------------");

                System.out.print("Nama Klub = ");
                String name = s.nextLine();

                System.out.print("Nama Stadion = ");
                String stadium = s.nextLine();

                System.out.print("Kapasitas Stadion = ");
                int capacity = s.nextInt();
                s.nextLine();

                club = new Club(name,stadium,capacity);
                
                System.out.println("Club berhasil di buat !");
            }
            else if(input==2)
            {
                if(club==null)
                {
                    System.out.println("Error, klub harus dibuat dulu");
                }
                System.out.println("--------------------------------------");
                System.out.println("Menambah Pelatih");
                System.out.println("--------------------------------------");

                System.out.println("Nama Pelatih = ");
                String name = s.nextLine();

                System.out.println("Usia Pelatih = ");
                int age = s.nextInt();
                s.nextLine();

                System.out.println("Kebangsaan Pelatih = ");
                String nationality = s.nextLine();

                System.out.println("Tahun Melatih = ");
                int tahun_melatih = s.nextInt();
                s.nextLine();

                Coach coach = new Coach(name,age,nationality,tahun_melatih);
                club.setCoach(coach);
                System.out.println("Pelatih berhasil di tambahkan !");
            }
            else if(input==3)
            {
                if(club==null)
                {
                    System.out.println("Error, klub harus dibuat dulu");
                }
                System.out.println("--------------------------------------");
                System.out.println("Menambah Pemain");
                System.out.println("--------------------------------------");

                System.out.println("Nama pemain = ");
                String name = s.nextLine();
                System.out.println("Usia = ");
                int age = s.nextInt();
                s.nextLine();

                
                System.out.print("Kebangsaan = ");
                String nationality = s.nextLine();

                System.out.println("Kemampuan Pemain");
                System.out.println("--------------------------------------");

                System.out.println("Posisi = ");
                String position = s.nextLine();
                
                System.out.println("Shooting = ");
                int shooting = s.nextInt();
                s.nextLine();

                System.out.println("Heading = ");
                int heading = s.nextInt();
                s.nextLine();

                System.out.println("Passing = ");
                int passing = s.nextInt();
                s.nextLine();

                System.out.println("Dribbling = ");
                int dribbling = s.nextInt();
                s.nextLine();

                System.out.println("Running = ");
                int running = s.nextInt();
                s.nextLine();

                Player player = new Player(name,nationality,age,shooting,dribbling,heading,running,passing,position);
                club.getPlayers()[index++]=player;
            }
            else if(input==4)
            {
                if(club==null)
                {
                    System.out.println("Error, klub harus dibuat dulu");
                }
                System.out.println("--------------------------------------");
                System.out.println("Melihat Klub");
                System.out.println("--------------------------------------");

                System.out.println("Nama Klub = " +club.getName());
                System.out.println("Nama Stadion = " + club.getStadion());
                System.out.println("Kapasitas Stadion = " + club.getCapacity());
                System.out.println("Pelatih  = " +club.getCoach());

                System.out.println("Pemain:");
                for(int a=1;a<=index;a++)
                {
                    if(players[a]!=null)
                    {
                        System.out.println(a + ". " + players[a].getName() + " - " + players[a].getPosition() + " - " + players[a].getAge() );
                    }
                }
            }
            else if(input==5)
            {
                break;
            }
        }

    }
}
*/

