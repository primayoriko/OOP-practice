public class KoleksiKendaraan{
    private Kendaraan[] koleksi;
    private int neff;
    private int size;

    KoleksiKendaraan(){
        this.koleksi = new Kendaraan[100];
        this.neff = 0;
        this.size = 100;
    }

    KoleksiKendaraan(int size){
        this.koleksi = new Kendaraan[size];
        this.neff = 0;
        this.size = size;
    }

    KoleksiKendaraan(KoleksiKendaraan other){
        this.koleksi = new Kendaraan[other.size];
        this.size = other.size;
        this.neff = other.neff;

        for(int i=0;i<this.neff;i++){
            
        }
    }

}