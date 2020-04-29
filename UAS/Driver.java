public class Driver {
    public static void main(String[] args){
        BnB server = BnB.connect();
        Owner o1 = new Owner("Ahmad");
        Owner o2 = new Owner("Hadi");
        server.addOwner(o1);
        server.addOwner(o2);

        Customer a = new Customer("Abu", "a@gm.com", "123213");
        Customer b = new Customer("Anu", "an@gm.com", "123213213");

        HotelRoom[] hO1 = new HotelRoom[10];
        for(int i=0;i<10;i++){
            hO1[i] = new HotelRoom(HotelRoom.Tipe.STANDARD, 400000);
        }

    }
}