
public class ScrapperThread extends Thread{
    Scrapper scrapper;
    ScrapperThread(Scrapper sc, String url, Scrapper.Num lowest){
        this.scrapper = sc;
    }

    public void run(){
        this.scrapper.notify();
    }
}