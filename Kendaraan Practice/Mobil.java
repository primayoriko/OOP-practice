public class Mobil extends Kendaraan{
    private String supir;
    
    Mobil(){
        super();
        this.supir = "XXX";
    }

    Mobil(int nomor, int tahun, String merk, String supir)
    {
        super(nomor, tahun, merk);
        this.supir = supir;
    }
    
    Mobil(Mobil other)
    {
        super(other);
        this.supir = other.supir;
    }

    public Mobil copyUnit(Mobil other){
        super.copyUnit(other);
        this.supir = other.supir;
        return this;
    }

    @Override
    public void printInfo(){
        super.printInfo();
        System.out.printf("Kategori: Mobil%n");
        System.out.printf("Supir: %s%n", this.supir);
    }

    public int biayaSewa(int lamaSewa){
        return 500000*lamaSewa;
    }
}