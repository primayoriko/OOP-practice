
public class ScrapperThread extends Thread{
    Server server;
    String url;
    ScrapperThread(Server server, String url){
        this.server = server;
        this.url = url;
    }

    public void run(){
        Website site = new Website(this.url);
        int price = site.getPrice();
        this.server.sendPrice(price);
    }

    public interface Server{
        public void sendPrice(int price);
    }
}