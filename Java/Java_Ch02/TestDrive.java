

public class TestDrive {
     public static void main( String args[] )
      {
           Human Andi = new Human();
           /*
              direct access tidak boleh lagi digunakan karena masing - masing variabel di private

             Andi.name = "Andi Budiman";
             Andi.age = 10;
             Andi.introduce();
           */

             Andi.setName("Andi");
             Andi.setAge(20);
             System.out.println(Andi.getName());

             Coach Stefan = new Coach();
             Stefan.setCName("Stefan");
             Stefan.setCAge(35);
             System.out.println(Stefan.getCName());
             System.out.println(Stefan.getCAge());
       }
}
