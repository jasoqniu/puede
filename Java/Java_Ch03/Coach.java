import javax.swing.text.html.CSS;

public class Coach {
    private String CName;
    private String CNationality;
    private int CAge;
    private int CYear;

    public void setCName(String CName)
      {
        if(CName.equals("Stefan")==true)
           this.CName = CName;
        else
            System.out.println("Error, coach name is incorrect");
      }

      public void setCAge(int CAge)
      {
          if(CAge>0)
               this.CAge = CAge;
          else
               System.out.println("Error, age must be greater than 0");
      }

    public void setCNationaliry(String CNationality)
      {
        if(CNationality.equals("German")==true)
           this.CNationality = CNationality;
        else
            System.out.println("Error, coach name is incorrect");
      }

      public String getCAge()
      {
           return "Coach age is" + CAge;
      }

      public String getCName()
      {
           return "Coach name is "+CName;
      }

      public String getCNationality()
      {
           return "Coach nationality is "+CNationality;
      }

      public Coach()
      {
           CName = "unknown";
           CAge = 0;
           CNationality = "unknown";
       }

       public Coach(String CName, int CAge, String CNationality)
       {
              this.CName = CName;
              this.CAge = CAge;
              this.CNationality = CNationality;

       }
}
