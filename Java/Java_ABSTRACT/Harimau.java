
public class Harimau extends Binatang
{
    public Harimau()
    {
        super();
    }

    public Harimau(String nama, String lokasi, String makanan, int berat)
    {
        super(nama, lokasi, makanan, berat);
    }

    @Override
    public void bergerak()
    {
        System.out.println(getNama() + " bergerak dengan melompat dan berlari");
    }

    @Override
    public void makan()
    {
        System.out.println(getNama() + " memakan " + getMakanan());
    }

    @Override
    public void berkembangBiak()
    {
        System.out.println(getNama() + " berkembang biak dengan cara beranak");
    }

    @Override
    public void lokasi()
    {
        System.out.println(getNama() + " tinggal di " + getLokasi());
    }

    @Override
    public void suara()
    {
        System.out.println(getNama() + " bersuara roarrrrrrr ");
    }

    @Override
    public void introduce()
    {
        System.out.println("Harimau ini bernama"+getNama());
        bergerak();
        makan();
        berkembangBiak();
        lokasi();
        suara();
    }
}