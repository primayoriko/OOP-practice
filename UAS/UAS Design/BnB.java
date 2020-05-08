import java.util.*;

public class BnB {
    private static BnB obj;
    private String date;
    private List<Owner> ownerList= new ArrayList<Owner>();

    private BnB() {}

    public static BnB connect() 
    { 
        if (obj==null) 
            obj = new BnB(); 
        return obj; 
    } 

    public void addOwner(Owner o){
        this.ownerList.add(o);
    }

    public void updateDate(String date){
        this.date = date;
    }

    public void showAllRoomInfo(){
        for(Owner o : ownerList){
            for(Property p : o.getAllProperty()){
                p.showInfo(date);
            }
        }
    }

    // public void showAvailableRoomInfo(){}
}