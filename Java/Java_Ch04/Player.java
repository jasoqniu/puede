public class Player extends Human {
    private int dribbling;
    private int shooting;
    private int heading;
    private int running;
    private int passing;
    private String position;

    public Player()
    {
        super();
        this.dribbling = 0;
        this.shooting = 0;
        this.heading = 0;
        this.running = 0;
        this.passing = 0;
        this.position = "None";
    }
    
    public int getAverage()
    {
      int totalskill=dribbling+shooting+heading+running+passing;
      int avgskill = (totalskill / 5);
      return avgskill;
    }

    public void setDribbling(int dribbling)
    {
      this.dribbling = dribbling;
    }
    public int getDribbling()
    {
      return dribbling;
    }

    public void setShooting(int shooting)
    {
      this.shooting = shooting;
    }
    public int getShooting()
    {
      return shooting;
    }

    public void setHeading(int heading)
    {
      this.heading = heading;
    }
    public int getHeading()
    {
      return heading;
    }

    public void setRunning(int running)
    {
      this.running = running;
    }
    public int getRunning()
    {
      return running;
    }

    public void setPassing(int passing)
    {
      this.passing = passing;
    }
    public int getPassing()
    {
      return passing;
    }

    public void setPosition(String position)
    {
      this.position = position;
    }
    public String getPosition()
    {
      return position;
    }



    public Player(String name, String nationality, int age, int shooting, int dribbling, int heading, int running, int passing, String position)
    {
        super(name,age,nationality);
        this.dribbling = dribbling;
        this.shooting = shooting;
        this.heading = heading;
        this.running = running;
        this.passing = passing;
        this.position = position;

    }

    public void introduce()
      {
           System.out.println("Halo nama saya " + getName() + ", umur saya " + getAge());
           System.out.println("Player Stats");
           System.out.println("Dribbling : "+dribbling);
           System.out.println("Shooting : "+shooting);
           System.out.println("Heading : "+heading);
           System.out.println("Running : "+running);
           System.out.println("Passing : "+passing);
           System.out.println("Position : "+position);
      }
}
