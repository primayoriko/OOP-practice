abstract class Kendaraan{
    protected int nomor;
    protected int tahun;
    protected String merk;

    public Kendaraan()
    {
        this.nomor = 0;
        this.tahun = 0;
        this.merk = "XXX";
    }

    // User-defined ctor
    public Kendaraan(int nomor, int tahun, String merk)
    {
        this.nomor = nomor;
        this.tahun = tahun;
        this.merk = merk;
    }

    // Cctor
    public Kendaraan(Kendaraan other)
    {
        this.nomor = other.nomor;
        this.tahun = other.tahun;
        this.merk = other.merk;
    }

    public Kendaraan copyUnit(Kendaraan other){
        this.nomor = other.nomor;
        this.tahun = other.tahun;
        this.merk = other.merk;
        return this;
    }

    public void printInfo()
    {
        System.out.printf("Nomor: %d%n", this.nomor);
        System.out.printf("Tahun: %d%n", this.tahun);
        System.out.printf("Merk: %s%n", this.merk);
    } 

    abstract int biayaSewa(int lamaSewa);
}