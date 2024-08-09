
public class Coach {
    private String coachname;
    private int coachage;

    public void setCName(String coachname)
      {
        if(coachname=="Stefan")
           this.coachname = coachname;
        else
            System.out.println("Error, coach name is incorrect");
      }

      public void setCAge(int coachage)
      {
          if(coachage>0)
               this.coachage = coachage;
          else
               System.out.println("Error, age must be greater than 0");
      }

      public int getCAge()
      {
           return coachage;
      }

      public String getCName()
      {
           return "Coach name is "+coachname;
      }

      
}

