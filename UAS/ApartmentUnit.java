public class ApartmentUnit extends Property{
    private int room;

    public ApartmentUnit(int room, int price){
        this.room = room;
        this.price = price;
    }

    @Override 
    public void showInfo(String date){
        super.showInfo(date);
        System.out.println("Jumlah ruangan : " + this.room);
    }
}