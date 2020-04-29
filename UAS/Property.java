import java.util.*;

public abstract class Property {
    protected Owner owner;
    protected Map<String, Customer> rent = new HashMap<String, Customer>();
    protected int price;

    public void reservation(Customer c, String date) throws Exception{
        if(this.rent.get(date)!= null)
            throw new Exception("Sudah ada penyewa");
        else{
            this.rent.put(date, c);
        }
    }

    public Customer getCustomerInfo(String date){
        return this.rent.get(date);
    }

    public boolean isReserved(String date){
        if(this.rent.get(date)!= null)
            return true;
        else
            return false;
    }

    public void setPrice(int price){
        this.price = price;
    }

    public int getPrice(){
        return this.price;
    }

    public void showInfo(String nowDate){
        System.out.println("Pemilik : " + owner.getName());
        System.out.println("Status : " + ((isReserved(nowDate))? "Dipesan" : "Tersedia"));
        System.out.println("Harga : " + Integer.toString(this.getPrice()));
    }
}