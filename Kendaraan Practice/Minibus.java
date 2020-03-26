public class Minibus extends Kendaraan{
    Minibus(){
        super();
    }

    // User ctor
    Minibus(int nomor, int tahun, String merk){
        super(nomor, tahun, merk);
    }

    // cctor
    Minibus(Minibus other){
        super(other);
    }

    public Minibus copyUnit(Minibus other){
        super.copyUnit(other);
        return this;
    }

    @Override
    public void printInfo(){
        super.printInfo();
        System.out.printf("Kategori: Minibus%n");
    }

    public int biayaSewa(int lamaSewa){
        float result = lamaSewa<=5 ? (float)5e6 : (float)(5e6+(5e5*(lamaSewa-5)));
        return (int)(result*calculateDiscount(lamaSewa));
    }

    public float calculateDiscount(int lamaSewa)
    {
        return lamaSewa>10? (float)0.9 : (float)1.0 ;
    }

}