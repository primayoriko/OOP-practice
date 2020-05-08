public class HotelRoom extends Property{
    public static enum Tipe{
        DELUXE,
        SUITE,
        STANDARD
    }

    private HotelRoom.Tipe tipe;

    HotelRoom(HotelRoom.Tipe tipeHotel, int price){
        this.tipe = tipeHotel;
        this.price = price;
    }


    @Override 
    public void showInfo(String date){
        super.showInfo(date);
        System.out.println("Tipe Hotel : " + this.tipe);
    }
}