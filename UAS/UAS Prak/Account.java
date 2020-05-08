abstract public class Account implements HasPosition {
    private String nama;
    private Position alamat;

    Account(String nama, Position alamat){
        this.nama = nama;
        this.alamat = alamat;
    }

    @Override
    public Position getPosition(){
        return this.alamat;
    }

    @Override
    public void setPosition(Position p){
        this.alamat = p;
    }
}