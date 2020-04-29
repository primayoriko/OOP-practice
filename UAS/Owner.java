import java.util.*;

public class Owner {
    private List<Property> property;
    private String name;

    Owner(String name){
        this.name = name;
        this.property = new ArrayList<Property>();
    }

    public String getName(){
        return this.name;
    }

    public void addProperty(Property p){
        this.property.add(p);
    }

    public List<Property> getAllProperty(){
        return this.property;
    }

    public void sendBroadcast(String s, String nowDate){
        Set<Customer> reciever = new HashSet<Customer>();
        for(Property p : this.property){
            if(p.isReserved(nowDate)){
                reciever.add(p.getCustomerInfo(nowDate));
            }
        }
        for(Customer c : reciever){
            c.showNotification(s);
        }
    }
}