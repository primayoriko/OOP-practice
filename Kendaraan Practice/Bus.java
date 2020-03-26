public class Bus extends Kendaraan{
    private int kapasitas;
    
    Bus(){
        super();
        this.kapasitas = 0;
    }

    Bus(int nomor, int tahun, String merk, int kapasitas){
        super(nomor, tahun, merk);
        this.kapasitas = kapasitas;
    }

    Bus(Bus other)
    {
        super(other);
        this.kapasitas = other.kapasitas;
    }

    public Bus copyUnit(Bus other){
        super.copyUnit(other);
        this.kapasitas = other.kapasitas;
        return this;
    }

    @Override
    public void printInfo()
    {
        super.printInfo();
        System.out.printf("Kategori: Bus%n");
        System.out.printf("Kapasitas: %d%n", this.kapasitas);
    }

    public int biayaSewa(int lamaSewa)
    {
        return (int)1e6*lamaSewa;
    }
}