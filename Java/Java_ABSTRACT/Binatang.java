
public abstract class Binatang
{
    private String nama;
    private String lokasi;
    private String makanan;
    private int berat;

    public Binatang()
    {
        this.nama = "";
        this.lokasi = "";
        this.makanan = "";
        this.berat = 0;
    }

    public Binatang(String nama, String lokasi, String makanan, int berat)
    {
        this.nama = nama;
        this.lokasi = lokasi;
        this.makanan = makanan;
        this.berat = berat;
    }

    public void setNama(String nama)
    {
        this.nama = nama;
    }

    public void setLokasi(String lokasi)
    {
        this.lokasi = lokasi;
    }

    public void setMakanan(String makanan)
    {
        this.makanan = makanan;
    }

    public void setBerat(int berat)
    {
        this.berat = berat;
    }

    public String getNama()
    {
        return nama;
    }

    public String getLokasi()
    {
        return lokasi;
    }

    public String getMakanan()
    {
        return makanan;
    }

    public int getBerat()
    {
        return berat;
    }


    //Method cara bergerak binatang
    public void bergerak()
    {
        System.out.println(this.nama + " bergerak dengan ..... " );
    }
 
    //Method makan
    public void makan()
    {
        System.out.println(this.nama + " memakan " + this.makanan );
    }
    
    //Method berkembang biak
    public void berkembangBiak()
    {
        System.out.println(this.nama + " berkembang biak dengan cara ..... " );
    }

    public void lokasi()
    {
        System.out.println(this.nama + " memiliki habitat di " + this.lokasi );
    }

    public void suara()
    {
        System.out.println(this.nama + " memiliki suara ..... ");
    }

    public void introduce()
    {
        bergerak();
        makan();
        berkembangBiak();
        lokasi();
        suara();
    }
}