import java.util.*;

public class League {
    private String namaleague;
    private int tahun;
    private Club[] clubs;
    public int indexclub=1;
    public int indexplayer=0;
    private Scanner s = new Scanner(System.in);

    public League(String namaleague,int tahun)
    {
        this.namaleague = namaleague;
        this.tahun = tahun;
        this.clubs = new Club[5];

        initialClubs();
    }
    
    public void initialClubs()
    {
        Club mu = new Club("Manchester United", "Old Trafford", 80000);
        Player pogba = new Player ("Paul Pogba", "France", 23, 9,9,8,7,8, "Midfielder");
        mu.getPlayers()[indexplayer++]=pogba;
        clubs[1] = mu;

        Club chel= new Club("Chelsea", "Stamford Bridge", 90000);
        Player terry = new Player ("John Terry", "England", 30, 11,14,5,4,12, "Defender");
        chel.getPlayers()[indexplayer++]=terry;
        clubs[2] = chel;

        Club liv = new Club("Liverpool", "Anfield", 70000);
        Player virgil = new Player ("Virgil Van Djik", "Netherlands", 25, 12,19,5,13,4, "Defender");
        liv.getPlayers()[indexplayer++]=virgil;
        clubs[3] = liv;

        Club mc = new Club("Manchester City", "Etihad", 60000);
        Player grealish = new Player ("Jack Grealish", "England", 20, 5,3,8,9,14, "Winger");
        mc.getPlayers()[indexplayer++]=grealish;
        clubs[4] = mc;
    }
    /* 
    public void initialEnemy()
    {
        for(int a=1;a<=4;a++)
        {
            for(int b=1;b<=4;b++)
            {
                if(a!=b)
                {
                    clubs[a].addEnemy(clubs[b]);
                }
            }
        }
    }
    */

    
    public void setNamaleague(String namaleague)
    {
        this.namaleague = namaleague;
    }
    public void setTahun(int tahun)
    {
        this.tahun = tahun;
    }
    public void setClub(Club[] clubs)
    {
        this.clubs = clubs;
    }
    public String getNamaleague()
    {
        return namaleague;
    }
    public int getTahun()
    {
        return tahun;
    }
    public Club[] getClub()
    {
        return clubs;
    }
    
    public Club search(String name)
    {
        for(int a=1;a<=5;a++)
        {
            if(clubs[a].getName().equals(name))
            {
                return clubs[a];
            }
        }
        return null;
    }


    public void view()
    {
        for(int b=1;b<=4;b++)
        {
        if(clubs[b]!=null)
        {
            System.out.println("Daftar Klub Peserta:");
            for(int a=1;a<=indexclub;a++)
            {
                System.out.println((a)+". "+clubs[a].getName()+" - "+clubs[a].getStadion()+" - "+clubs[a].getCapacity()+" - "+clubs[a].getCoach().getName());
            }
        }
        else
        {
            System.out.println("-----");
        }
        }
    }


    public void scheduling()
    {
        System.out.println("--------------------------------------");
        System.out.println("Hasil Penjadwalan Liga");
        System.out.println("--------------------------------------");

        int current = 1;
        int enemy = current + 1;
        int week = 1;
        while ( true )
        {
            if(clubs[current].getEnemy(week)==null)
            {
                if(clubs[enemy].getEnemy(week)==null)
                {   
                    System.out.println("terjadi match");
                    System.out.println("Week="+week+" current="+ current+" enemy="+enemy+" clubs[current]="+clubs[current].getName() +" club[enemy]="+ clubs[enemy].getName()) ;
                    clubs[current].setEnemy(week, clubs[enemy]);
                    clubs[enemy].setEnemy(week, clubs[current]);
                    
                    int temp = s.nextInt();
                    //System.out.println("Week " + week + ":");
                    //System.out.println(clubs[current].getName() + " vs " + clubs[enemy].getName());

                    week ++;
                    if ( week > 3)
                    {
                        week = 1;
                        current +=1;
                    }
                    
                    enemy++;
                    if( enemy > 4)
                    {
                        enemy = current + 1;
                    }
                }
                else
                {
                    enemy++;
                    if( enemy > 4)
                    {
                        enemy = current + 1;
                    }
                }
            }
            else
            {
                week++;
                if ( week > 3)
                {
                    week = 1;
                    current +=1;
                }
            }
            
            if (current==3 && week==3)
            {
                break;
            }
        }//end of while true

        //cetak hasil scheduling
        for(week=1;week<=3;week++)
        {
            System.out.println("Week #"+week);
            for(int a=1;a<=4;a++)
            {
                Club satu = clubs[a];
                Club dua = clubs[a].getEnemy(week);
                if ( satu == null || dua == null)
                    System.out.println(a+". NULL");
                else if ( satu.getVisited(week) == false)
                {
                    System.out.println(satu.getName() + " vs " + dua.getName());
                    satu.setVisited(week, true);
                    dua.setVisited(week, true);
                }
            }
        }
    }

    public void matchScore()
    {

         System.out.println("--------------------------------------");
        System.out.println("Hasil Pertandingan Gila");
        System.out.println("--------------------------------------");

        Random rand = new Random();
        for(int week=1;week<=3;week++)
        {
            for(int a=1;a<=4;a++)
            {
                Club satu = clubs[a];
                Club dua = clubs[a].getEnemy(week);
                if(satu.getVisited(week)==true)
                {
                    int temp1=satu.getAverage();
                    int temp2=dua.getAverage();

                    int total=temp1+temp2;
                    int [] arr1 = new int [total+5];
                    int [] arr2 = new int [total+5];

                    for(int x=1;x<=temp1;x++)
                    {
                        arr1[x]=rand.nextInt(4)+2;
                    }
                    for(int x=temp1+1;x<=total;x++)
                    {
                        arr1[x]=rand.nextInt(2);
                    }
                    int rand1=rand.nextInt(total)+1;
                    int goal1=arr1[rand1];

                    for(int x=1;x<=temp2;x++)
                    {
                        arr2[x]=rand.nextInt(4)+2;
                    }
                    for(int x=temp2+1;x<=total;x++)
                    {
                        arr2[x]=rand.nextInt(2);
                    }
                    int rand2=rand.nextInt(total)+1;
                    int goal2=arr2[rand2];

                    satu.setScore(week, goal1);
                    dua.setScore(week, goal2);
                    satu.setGoalattack(goal1);
                    dua.setGoalattack(goal2);
                    satu.setGoaldefense(goal2);
                    dua.setGoaldefense(goal1);

                    satu.setPlay(satu.getPlay()+1);
                    dua.setPlay(satu.getPlay()+1);
                    if(goal1>goal2)
                    {
                        satu.setWin( satu.getWin() + 1 );
                        dua.setLose( dua.getLose() + 1);
                        satu.setPoint( satu.getPoint() + 3);
                    }
                    else if(goal1==goal2)
                    {
                        satu.setDraw( satu.getDraw()+1);
                        dua.setDraw(dua.getDraw()+1);
                        satu.setPoint(satu.getPoint()+1);
                        dua.setPoint(dua.getPoint()+1);
                    }
                    else if(goal1<goal2)
                    {
                        dua.setWin(dua.getWin()+1);
                        satu.setLose(satu.getLose()+1);
                        dua.setPoint(dua.getPoint()+3);
                    }
                    satu.setVisited(week, false);
                    dua.setVisited(week, false);
                }
            }
        }
        for(int week=1;week<=3;week++)
        {
            System.out.println("Week #"+week);
            for(int a=1;a<=4;a++)
            {
                Club satu = clubs[a];
                Club dua = clubs[a].getEnemy(week);
                if(satu.getVisited(week)==false)
                {
                    System.out.println(satu.getName() + "(" + satu.getScore(week) + ") vs (" + dua.getScore(week) + dua.getName());
                    satu.setVisited(week, true);
                    dua.setVisited(week, true);
                }
            }
        }
    }

    public void leagueTable()
    {
        System.out.println("--------------------------------------");
        System.out.println("Kelasemen Liga");
        System.out.println("--------------------------------------");
        System.out.println("Rank \t Club \t Play \t Win \t Draw \t Lose \t GoalAttack \t GoalDefense \t Point");
        for(int a=1;a<=4;a++)
        {
            System.out.println(a+". \t"+clubs[a].getName()+"\t"+clubs[a].getPlay()+"\t"+clubs[a].getWin()+"\t"+clubs[a].getDraw()+"\t"+clubs[a].getLose()+"\t"+clubs[a].getGoalattack()+"\t"+clubs[a].getGoaldefense()+"\t"+clubs[a].getPoint());
        }

    }

    /* 
    public void matchScore()
    {
        Random rand = new Random();
        for(int week=1;week<=3;week++)
        {
            for(int a=1;a<=4;a++)
            {
                Club satu = clubs[a];
                Club dua = clubs[a].getEnemy(week);
                if(satu.getVisited(week)==false)
                {
                    int temp1=satu.getAverage();
                    int temp2=dua.getAverage();

                    int total=temp1+temp2;
                    int [] arr1 = new int [total+5];
                    int [] arr2 = new int [total+5];

                    for(int x=1;x<=temp1;x++)
                    {
                        arr1[x]=rand.nextInt(4)+2;
                    }
                    for(int x=temp1+1;x<=total;x++)
                    {
                        arr1[x]=rand.nextInt(2);
                    }
                    int rand1=rand.nextInt(total)+1;
                    int goal1=arr1[rand1];

                    for(int x=1;x<=temp2;x++)
                    {
                        arr2[x]=rand.nextInt(4)+2;
                    }
                    for(int x=temp2+1;x<=total;x++)
                    {
                        arr2[x]=rand.nextInt(2);
                    }
                    int rand2=rand.nextInt(total)+1;
                    int goal2=arr2[rand2];

                    satu.setScore(week, goal1);
                    dua.setScore(week, goal2);
                    satu.setGoalattack(goal1);
                    dua.setGoalattack(goal2);
                    satu.setGoaldefense(goal1);
                    dua.setGoaldefense(goal2);

                    if(goal1>goal2)
                    {
                        satu.setWin();
                    }
                    else if(goal1==goal2)
                    {

                    }
                    else if(goal1<goal2)
                    {

                    }
                    
                }
            }
        }
        for(int week=1;week<=3;week++)
        {
            System.out.println("Week #"+week);
            for(int a=1;a<=4;a++)
            {
                Club satu = clubs[a];
                Club dua = clubs[a].getEnemy(week);
                if(satu.getVisited(week)==true)
                {
                    System.out.println(satu.getName() + "(" + satu.getScore(week) + ") vs (" + dua.getScore(week) + dua.getName());
                }
            }
        }
    }
    */





    /* 
    public void matchScore()
    {
        int current = 1;
        int enemy = current + 1;
        int week = 1;
        Random rand = new Random();
        System.out.println("--------------------------------------");
        System.out.println("Hasil Pertandingan Liga");
        System.out.println("--------------------------------------");
        while ( true )
        {
            if(clubs[current].getEnemy(week)==null)
            {
                if(clubs[enemy].getEnemy(week)==null)
                {   

                    clubs[current].setEnemy(week, clubs[enemy]);
                    clubs[enemy].setEnemy(week, clubs[current]);
                    
                    int goal1=rand.nextInt(6);
                    int goal2=rand.nextInt(6);
                    System.out.println("Week " + week + ":");
                    System.out.println(clubs[current].getName()+" (" + goal1 + ") vs (" + goal2 + ") "+clubs[enemy].getName());

                    week ++;
                    if ( week > 3)
                    {
                        week = 1;
                        current +=1;
                    }
                    
                    if( enemy > 4)
                    {
                        enemy = current + 1;
                    }
                }
                else
                {
                    enemy++;
                    if( enemy > 4)
                    {
                        enemy = current + 1;
                    }
                }
            }
            else
            {
                week++;
                if ( week > 3)
                {
                    week = 1;
                    current +=1;
                }
            }
            
            if (current==3 && week==3)
            {
                break;
            }
        }
    }
    */

}
