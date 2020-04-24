import java.util.ArrayList;
import java.util.List;

public class Subject {
	
   private List<Observer> observers = new ArrayList<Observer>();
   private String secretWord;

   public String getSecret() {
      return secretWord;
   }

   public void setSecret(String secretWord) {
      this.secretWord = secretWord;
      notifyObservers();
   }

   public void notifyObservers(){
    for (Observer observer : observers) {
       observer.notified();
    }
 } 	

   public void puts(Observer observer){
      observers.add(observer);		
   }
}