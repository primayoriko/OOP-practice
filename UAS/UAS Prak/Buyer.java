public class Buyer extends Account{
    private int saldo;

    public Buyer(String nama, Position alamat, int saldo){
        super(nama, alamat);
        this.saldo = saldo;
    }

    public void substractSaldo(int diff) throws NotEnoughMoneyException{
        if(this.saldo - diff < 0)
            throw new NotEnoughMoneyException(String.format("Membutuhkan uang %d sedangkan saldo hanya %d", diff, this.saldo));
        else
            this.saldo -= diff;
    }
}