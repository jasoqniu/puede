public class Coach extends Human
{
    private int tahun_melatih;
    public void setTahun_melatih(int tahun_melatih)
    {
      this.tahun_melatih = tahun_melatih;
    }
    public int getTahun_melatih()
    {
      return tahun_melatih;
    }

    public Coach()
    {
      super();
      tahun_melatih = 0;
    }
    public Coach (String name, int age, String nationality, int tahun_melatih)
    {
      super(name, age, nationality); 
      this.tahun_melatih = tahun_melatih;
    }
    
    public void introduce()
    {
      System.out.println("Halo nama saya " + getName() + ", saya dari "+ getNationality() + " dan saya melatih sejak tahun " + getTahun_melatih());
    }
    public static void main(String[] args) {
      Coach Bob = new Coach();
      Bob.introduce();
    }
}
