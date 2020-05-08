import java.util.*;

public class Product implements HasPosition{
    private int harga;
    private int stok;
    private Position posisi;

    Product(int harga, int stok, Position gudang){
        this.harga = harga;
        this.stok = stok;
        this.posisi = gudang;
    }

    public void decrementStock() throws ProductOutOfStockException{
        if(this.stok==0)
            throw new ProductOutOfStockException("Produk ini kosong");
        else
            this.stok--;
    }

    public int getPrice(){
        return this.harga;
    }

    @Override
    public Position getPosition(){
        return this.posisi;
    }

    @Override
    public void setPosition(Position p){
        this.posisi = p;
    }
}