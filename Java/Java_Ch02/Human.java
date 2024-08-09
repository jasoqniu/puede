
public class Human {
    //bagian pertama (variabel / field / member)
      private String name;
      private int age;

      //bagian kedua (function / behavior / method)
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

      public void greetings()
      {
           System.out.println("Halo nama saya " + name +"dan umur saya "+age);
      }
}
