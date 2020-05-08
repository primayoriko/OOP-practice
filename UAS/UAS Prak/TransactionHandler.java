/*
    Nama : Naufal Prima Yoriko
    NIM : 13518146

*/
// import java.lang.reflect.*;

public class TransactionHandler {
    private Buyer pembeli;
    private Product produk;
    private Courier kurir;

    public TransactionHandler(Buyer pembeli, Product produk, Courier kurir){
        this.pembeli = pembeli;
        this.produk = produk;
        this.kurir = kurir;
    }

    public void execute() throws TransactionFailedException{
        try{
            this.pembeli.substractSaldo(this.produk.getPrice()+ this.kurir.checkPrice(this.produk.getPosition(), this.pembeli.getPosition()));
            this.produk.decrementStock();
            this.kurir.addToQueue(this.produk, this.pembeli, this.produk);
        } catch(ProductOutOfStockException e){
            throw new TransactionFailedException("Transaksi gagal");
        } catch(NotEnoughMoneyException e){
            System.out.println(e.getMessage());
        }
    }
}