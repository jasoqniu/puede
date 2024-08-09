public class Human
{
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
           this.age = age;
      }

      public int getAge()
      {
           return age;
      }

      public String getName()
      {
           return name;
      }

      public void introduce()
      {
           System.out.println("Halo nama saya " + name);
      }
}