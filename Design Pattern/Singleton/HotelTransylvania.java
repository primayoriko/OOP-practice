// Impelement Singleton
// Naufal Prima Yoriko
// 13518146
public class HotelTransylvania{
    private static HotelTransylvania hotel = new HotelTransylvania();
    //Elemen atau variabel lain yang diperlukan, contoh:
    int kamar = 10; //init

    private HotelTransylvania(){}

    public static HotelTransylvania getHotel(){
        return hotel;
    }
}