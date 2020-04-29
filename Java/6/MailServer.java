// import java api jika diperlukan
import java.util.*;

public class MailServer implements EventChannel {
  // tambahkan properties jika perlu
  private Hashtable<String, List<Subscriber>> subscriberLists;

  public MailServer() {
    this.subscriberLists = new Hashtable<>();
    // menginisiasi daftar subscriber
  }

  @Override
  public void addSubscriber(String topic, Subscriber s) {
    if (!this.subscriberLists.containsKey(topic))
      this.subscriberLists.put(topic, new ArrayList<>());
    this.subscriberLists.get(topic).add(s);
    // tambahkan s sebagai subscriber ke topic yang diberikan
  }

  @Override
  public void sendEvent(String topic, Event event) {
    // untuk setiap subscriber s yang sudah subscribe ke topic yang diberikan,
    // panggil s.onEvent(event)
    if (this.subscriberLists.containsKey(topic))
      for (Subscriber s : subscriberLists.get(topic))
          s.onEvent(event);
    
  }
}
