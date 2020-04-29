public class Customer {
    private String name;
    private String email;
    private String notelp;

    public Customer(String name, String email, String notelp){
        this.name = name;
        this.email = email;
        this.notelp = notelp;
    }

    public void reserve(Property p, String date) throws Exception{
        p.reservation(this, date);
    }

    public void showNotification(String s){
        System.out.println("Pelanggan " + this.name + " menerima pesan " + s);
    }

}