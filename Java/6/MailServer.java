// import java api jika diperlukan
import java.util.*;

public class MailServer implements EventChannel {
  // tambahkan properties jika perlu
  private Hashtable<String, List<Subscriber>> subscriberLists;

  public MailServer() {
    this.subscriberLists = new Hashtable<>();
    // menginisiasi daftar subscriber
  }

  public void addSubscriber(String topic, Subscriber s) {
    this.subscriberLists.get(topic).add(s);
    // tambahkan s sebagai subscriber ke topic yang diberikan
  }

  public void sendEvent(String topic, Event event) {
    // untuk setiap subscriber s yang sudah subscribe ke topic yang diberikan,
    // panggil s.onEvent(event)
    List<Subscriber> subs = subscriberLists.get(topic);
    for (Subscriber s : subs) {
        s.onEvent(event);
    }
  }
}
