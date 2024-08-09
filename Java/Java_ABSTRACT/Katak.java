
public class Katak extends Binatang 
{
   public Katak()
    {
        super();
    }
    
    public Katak(String nama, String lokasi, String makanan, int berat)
    {
        super(nama, lokasi, makanan, berat);
    }

    @Override
    public void bergerak()
    {
        System.out.println(getNama() + " bergerak dengan lompat");
    }

     @Override
    public void makan()
    {
        System.out.println(getNama() + " memakan " + getMakanan());
    }

    @Override
    public void berkembangBiak()
    {
        System.out.println(getNama() + " berkembang biak dengan cara bertelur");
    }

    @Override
    public void lokasi()
    {
        System.out.println(getNama() + " tinggal di " + getLokasi());
    }

    @Override
    public void suara()
    {
        System.out.println(getNama() + " bersuara menguak ");
    } 

    @Override
    public void introduce()
    {
        System.out.println("Katak ini bernama"+getNama());
        bergerak();
        makan();
        berkembangBiak();
        lokasi();
        suara();
    }

}
