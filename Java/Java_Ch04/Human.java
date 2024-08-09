public class Human
{
    //bagian pertama (variabel / field / member)
      private String name;
      private int age;
      private String nationality;

      public Human(String name, int age, String nationality)
      {
           this.name = name;
           this.age = age;
           this.nationality = nationality;
     }

     public void setName(String name)
      {
           this.name = name;
      }

      public void setAge(int age)
      { 
        if(age>0)
             this.age = age;
        else
            System.out.println("Error, age must be greater than 0");
      }

      public void setNationality(String nationality)
      {
          this.nationality = nationality;
      }

      public int getAge()
      {
           return age;
      }

      public String getName()
      {
           return name;
      }
     
      public String getNationality()
      {
          return nationality;
      }

      public Human()
      {
          name = "John Doe";
          age = 0;
          nationality = "Indonesia";
      }

      
      public void introduce()
      {
           System.out.println("Halo nama saya " + name + ", saya dari"+ nationality);
      }
}
