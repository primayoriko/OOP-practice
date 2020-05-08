/*
    Nama : Naufal Prima Yoriko
    NIM : 13518146
*/

import java.util.*;

public class Courier implements HasPosition{
    private class Pengiriman{
        public HasPosition asal;
        public HasPosition tujuan;
        public Product produk;

        Pengiriman(HasPosition asal, HasPosition tujuan, Product produk){
            this.asal = asal;
            this.tujuan = tujuan;
            this.produk = produk;
        }
    }

    private Queue<Pengiriman> antrian;
    private int multiplier;
    private Position alamat;

    public Courier(int multiplier, Position alamat){
        this.multiplier = multiplier;
        this.alamat =  alamat;
        this.antrian = new LinkedList<Pengiriman>();
    }

    public void addToQueue(HasPosition asal, HasPosition tujuan, Product produk){
        this.antrian.offer(new Pengiriman(asal, tujuan, produk));
    }

    public void send(){
        if(!this.antrian.isEmpty()){
            Pengiriman p = this.antrian.poll();
            System.out.println(String.format("AvatarDuel %d berhasil dikirim", p.produk.getPrice()));
        }
    }

    public int checkPrice(Position asal, Position tujuan){
        return this.multiplier * (this.alamat.distanceTo(asal) + asal.distanceTo(tujuan) + tujuan.distanceTo(this.alamat));
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