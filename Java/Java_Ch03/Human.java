
public class Human {
    //bagian pertama (variabel / field / member)
      private String name;
      private int age;
      private String nationality;

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

      public int getAge()
      {
           return age;
      }

      public String getName()
      {
           return name;
      }

     //pastikan semua variabel diatas adalah private + ada function set get untuk masing-masing variabel

      public Human()
      {
           name = "unknown";
           age = 0;
           nationality = "unknown";
       }

       public Human(String name, int age)
       {
              this.name = name;
              this.age = age;
       }

         //bagian kedua (function / behavior / method)
         public void introduce()
         {
                 System.out.println("Halo nama saya " + name);
          }
}
