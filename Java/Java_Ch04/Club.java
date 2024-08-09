
import java.util.Scanner;
import java.util.*;
public class Club 
{
    Scanner s = new Scanner(System.in);
    int index=1;
    private String name;
    private Coach coach; // club memiliki seorang pelatih
    private String stadion;
    private int capacity;
    private Player[] players;
    

    private Club[] enemies = new Club[5];
    public int enemyamount=0;
    public int indexenemy=1;
    private int[] score = new int[5];
    private int play=0;
    private int win=0;
    private int draw=0;
    private int lose=0;
    private int goalattack=0;
    private int goaldefense=0;
    private int point=0;
    private boolean [] visited = new boolean[5];
    public Club()
    {
        name=null;
        stadion=null;
        capacity=0;
        for(int a=1;a<=3;a++)
        {
            visited[a]=false;
        }
    }

    public Club(String name, String stadion, int capacity)
    {
        this.name = name;
        this.stadion = stadion;
        this.capacity = capacity;
        this.players = new Player[25];
    }
    /* 
    public void addEnemy(Club enemy)
    {
        enemyamount++;
        enemies[enemyamount]=enemy;
    }
    */


    public void setScore(int week, int score)
    {
        this.score[week]=score;
    }
    public int getScore(int week)
    {
        return score[week];
    }

    public int getAverage()
    {
        int total=0;
        for(int a=1;a<=index;a++)
        {
            total = total+players[a].getAverage();
        }
        return (total / index);
    }

    public void setVisited(int week, boolean visited)
    {
        this.visited[week]=visited;
    }
    public boolean getVisited(int week)
    {
        return visited[week];
    }
    public Club getEnemy(int week) 
    {
        return enemies[week];
    }
    public void setEnemy(int week,Club enemy) 
    {
        this.enemies[week] = enemy;
    }
    public int getPlay() 
    {
        return play;
    }
    public int getWin() 
    {
        return win;
    }
    public int getDraw() 
    {
        return draw;
    }
    public int getLose() 
    {
        return lose;
    }
    public int getGoalattack() 
    {
        return goalattack;
    }
    public int getGoaldefense() 
    {
        return goaldefense;
    }
    public int getPoint() 
    {
        return point;
    }
    public void setPlay(int play) 
    {
        this.play=play;
    }
    public void setWin(int win) 
    {
        this.win = win;
    }
    public void setDraw(int draw) 
    {
        this.draw = draw;
    }
    public void setLose(int lose) 
    {
        this.lose = lose;
    }
    public void setGoalattack(int goalattack) 
    {
        this.goalattack = goalattack;
    }
    public void setGoaldefense(int goaldefense) 
    {
        this.goalattack = goaldefense;
    }
    public void setPoint(int point) 
    {
        this.point = point;
    }

    public String getName() 
    {
        return name;
    }

    public void setName(String name) 
    {
        this.name = name;
    }

    public Coach getCoach() 
    {
        return coach;
    }

    public void setCoach(Coach coach) 
    {
        this.coach = coach;
    }

    public String getStadion() 
    {
        return stadion;
    }

    public void setStadion(String stadion) 
    {
        this.stadion = stadion;
    }

    public int getCapacity() {
        return capacity;
    }

    public void setCapacity(int capacity) 
    {
        this.capacity = capacity;
    }

    public Player[] getPlayers() 
    {
        return players;
    }

    public void setPlayers(Player[] players) 
    {
        this.players = players;
    }


     public void view()
    {
        System.out.println("--------------------------------------");
        System.out.println("Melihat Klub");
        System.out.println("--------------------------------------");

        System.out.println("Nama Klub = " +getName());
        System.out.println("Nama Stadion = " + getStadion());
        System.out.println("Kapasitas Stadion = " + getCapacity());
        if ( coach != null)
            System.out.println("Pelatih  = " + this.getCoach().getName());
        else
            System.out.println("Pelatih  = - ");

        System.out.println("Pemain:");
        for(int a=1;a<=index;a++)
        {
            if(players[a]!=null)
            {
                System.out.println(a + ". " + players[a].getName() + " - " + players[a].getPosition() + " - " + players[a].getAge() );
            }
        }
    }


}
    /* 
    public static void main(String[] args)
    {
    Scanner s = new Scanner(System.in);
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
                club = new Club("Real Madrid","Santiago",8000);
               club.makeClub(); 
            }
            else if(input==2)
            {
                if(club!=null)
                {
                    club.setCoach(club.addCoach());
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
                    club.getPlayers()[club.index++]=club.addPlayer();
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
                    club.viewCLub(club);
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
        */






/* 
public static void main(String[] args)
{
    Scanner s = new Scanner(System.in);
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
               club = club.makeClub(); 
            }
            else if(input==2)
            {
                if(club!=null)
                {
                    club.setCoach(club.addCoach());
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
                    club.getPlayers()[club.index++]=club.addPlayer();
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
                    club.viewCLub(club);
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
*/
/* 
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


