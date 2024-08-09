import java.util.Scanner;

import java.util.*;
public class Soccer
{
    public static void main( String args[] )
    {
        Scanner s = new Scanner(System.in);    
        int P = 0;
        int index=1;
        League league = null;
        while(P != 7)
        {
            System.out.println("Menu League");
            System.out.println("1. Create League");
            System.out.println("2. Add Club");
            System.out.println("3. View League");
            System.out.println("4. Scheduling");
            System.out.println("5. Match score");
            System.out.println("6. League table");
            System.out.println("7. Exit");
            System.out.print("Choose menu league = ");
            P = s.nextInt();

            if(P == 1)
            {
                String temp = s.nextLine();
                System.out.print("Nama League = ");
                String namaleague = s.nextLine();
                System.out.print("Tahun Penyelenggaraan = ");
                int tahun = s.nextInt();
                league = new League(namaleague, tahun);
                System.out.println("League berhasil dibuat!");
            }

            else if(P == 2)
            {
                int p = 0;
                Club club = null;
                while(p != 5)
                {
                    System.out.println("Menu Club");
                    System.out.println("1. Create Club");
                    System.out.println("2. Add Coach");
                    System.out.println("3. Add Player");
                    System.out.println("4. View Club");
                    System.out.println("5. Exit");
                    System.out.print("Choose menu club = ");
                    p = s.nextInt();

                    if(p == 1)
                    {
                        String temp = s.nextLine();
                        System.out.print("Nama Club = ");
                        String namaclub = s.nextLine();
                        System.out.print("Nama stadion = ");
                        String namastadion = s.nextLine();
                        System.out.print("Kapasitas Stadion = ");
                        int kapasitasstadion = s.nextInt();
                        club = new Club(namaclub, namastadion, kapasitasstadion);
                        //league.addClub(club);
                        league.getClub()[index]=club;
                        index++;
                        System.out.println("Club berhasil dibuat dan ditambahkan ke Liga!");
                    }

                    else if(p == 2)
                    {
                        String temp = s.nextLine();
                        System.out.print("Nama Klub = ");
                        String namaklub = s.nextLine();

                        Club klub = league.search(namaklub);
                        if ( klub == null)
                            System.out.println("Klub tidak di temukan !!!");
                        else 
                        {
                            System.out.print("Nama Pelatih = ");
                            String namapelatih = s.nextLine();
                            System.out.print("Usia = ");
                            int usia = s.nextInt();
                            temp = s.nextLine();
                            System.out.print("Kebangsaan = ");
                            String kebangsaan = s.nextLine();
                            System.out.print("Tahun Melatih = ");
                            int tahunmelatih = s.nextInt();
                            System.out.println("");
                            System.out.println("Pelatih berhasil di tambahkan !");
                            Coach mrx = new Coach(namapelatih, usia, kebangsaan, tahunmelatih);
                            klub.setCoach(mrx);
                        }
                    }
                    else if(p == 3)
                    {
                        String temp = s.nextLine();
                        System.out.print("Nama Klub = ");
                        String namaklub = s.nextLine();

                        Club klub = league.search (namaklub);
                        if ( klub == null)
                            System.out.println("Klub tidak di temukan !!!");
                        else 
                        {
                            System.out.print("Nama Pemain = ");
                            String namapemain = s.nextLine();
                            System.out.print("Usia = ");
                            int usia = s.nextInt();
                            temp = s.nextLine();
                            System.out.print("Kebangsaan = ");
                            String kebangsaan = s.nextLine();
                            System.out.print("Posisi = ");
                            String posisi = s.nextLine();
                            System.out.print("Shooting = ");
                            int shooting = s.nextInt();
                            System.out.print("Heading = ");
                            int heading = s.nextInt();
                            System.out.print("Passing = ");
                            int passing = s.nextInt();
                            System.out.print("Dribbling = ");
                            int dribbling = s.nextInt();
                            System.out.print("Running = ");
                            int running = s.nextInt();
                            System.out.println("");
                            System.out.println("Pemain berhasil di tambahkan !");
                            Player pl = new Player(namapemain, kebangsaan, usia, shooting, dribbling, heading, running, passing, posisi);
                            //klub.addPlayer(pl);
                            club.getPlayers()[index]=pl;
                            index++;
                        }
                    }
                    else if (p == 4)
                    {
                        String temp = s.nextLine();
                        System.out.print("Nama Klub = ");
                        String namaklub = s.nextLine();
                        Club klub = league.search (namaklub);
                        if (klub == null)
                            System.out.println("Klub tidak di temukan !!!");
                        else 
                        {
                            klub.view();
                        }
                    }
                }
            }
            if(league!=null)
            {
                if(P == 3)
            {

                league.view();
            }
            else if(P == 4)
            {
                league.scheduling();
            }

            else if(P == 5)
            {
                league.matchScore();
            }

            else if(P == 6)
            {
                league.leagueTable();
            }
            }
            /* 
            else if(P == 3)
            {

                league.view();
            }
            else if(P == 4)
            {
                league.scheduling();
            }

            else if(P == 5)
            {
                league.matchScore();
            }

            else if(P == 6)
            {
                league.leagueTable();
            }
            */
        }
    }
}

/* 
public class Soccer {

    public static void main(String[] args)
    {
    Scanner s = new Scanner(System.in);
    int index=1;
    Club club = null;
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
                String stadion = s.nextLine();
                System.out.print("Kapasitas Stadion = ");
                int capacity = s.nextInt();
                s.nextLine(); 
                club = new Club(name,stadion,capacity);
                System.out.println("Klub berhasil di buat !");
            }
            else if(input==2)
            {
                if(club!=null)
                {
                    System.out.println("--------------------------------------");
                    System.out.println("Menambah Pelatih");
                    System.out.println("--------------------------------------");

                    System.out.print("Nama Pelatih = ");
                    String name = s.nextLine();

                    System.out.print("Usia Pelatih = ");
                    int age = s.nextInt();
                    s.nextLine();

                    System.out.print("Kebangsaan Pelatih = ");
                    String nationality = s.nextLine();

                    System.out.print("Tahun Melatih = ");
                    int tahun_melatih = s.nextInt();
                    s.nextLine();
                    
                    Coach perlatih = new Coach(name, age, nationality, tahun_melatih);
                    club.setCoach(perlatih);
                }
                else
                {
                System.out.println("Error, klub harus dibuat dulu");
                }
            }
            else if(input==3)
            {
                if(club!=null)
                {
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

                    System.out.print("Posisi = ");
                    String position = s.nextLine();
                    
                    System.out.print("Shooting = ");
                    int shooting = s.nextInt();
                    s.nextLine();

                    System.out.print("Heading = ");
                    int heading = s.nextInt();
                    s.nextLine();

                    System.out.print("Passing = ");
                    int passing = s.nextInt();
                    s.nextLine();

                    System.out.print("Dribbling = ");
                    int dribbling = s.nextInt();
                    s.nextLine();

                    System.out.print("Running = ");
                    int running = s.nextInt();
                    s.nextLine();
                    Player player = new Player(name,nationality,age,shooting,dribbling,heading,running,passing,position);
                    club.getPlayers()[index]=player;
                    index++;
                }
                else
                {
                System.out.println("Error, klub harus dibuat dulu");
                }
            }
            else if(input==4)
            {
                if(club!=null)
                {
                    System.out.println("--------------------------------------");
                    System.out.println("Melihat Klub");
                    System.out.println("--------------------------------------");

                    System.out.println("Nama Klub = " +club.getName());
                    System.out.println("Nama Stadion = " + club.getStadion());
                    System.out.println("Kapasitas Stadion = " + club.getCapacity());
                    System.out.println("Pelatih  = " +club.getCoach());

                    System.out.println("Pemain:");
                    Player[] players = club.getPlayers();
                    for(int a=1;a<=index;a++)
                    {
                        if(players[a]!=null)
                        {
                            System.out.println(a + ". " + players[a].getName() + " - " + players[a].getPosition() + " - " + players[a].getAge() );
                        }
                    }
                }
                else
                {
                System.out.println("Error, klub harus dibuat dulu");
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