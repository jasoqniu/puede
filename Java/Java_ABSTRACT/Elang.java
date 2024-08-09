public class Elang extends Binatang
{
    public Elang()
    {
        super();
    }
    
    public Elang(String nama, String lokasi, String makanan, int berat)
    {
        super(nama, lokasi, makanan, berat);
    }

    @Override
    public void bergerak()
    {
        System.out.println(getNama() + " bergerak dengan terbang");
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
        System.out.println(getNama() + " bersuara memekik ");
    }

    @Override
    public void introduce()
    {
        System.out.println("Elang ini bernama"+getNama());
        bergerak();
        makan();
        berkembangBiak();
        lokasi();
        suara();
    }
}


