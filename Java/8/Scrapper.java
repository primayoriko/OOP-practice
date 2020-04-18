import java.util.ArrayList;

class Scrapper {
    private ArrayList<String> urlList;
    private int lowest;
    public Scrapper() {
        urlList = new ArrayList<String>();
    }

    public void addUrl(String url) {
        urlList.add(url);
    }

    public class Num{
        public int val;
        Num(int n){
            this.val = n;
        }
    }

    public synchronized int scrapLowestPrice() {
        // Kode berikut masih melakukan scrap ke banyak website
        // secara sekuensial. Agar lebih cepat, ubahlah kode di bawah ini
        // menjadi paralel menggunakan wait dan notify, dengan membuat
        // instance ScrapperThread
        // Hint: baca materi praktikum
        this.lowest = Integer.MAX_VALUE;
        int cnt = urlList.size();
        for (String url : urlList) {
            // Website website = new Website(url);
            Thread findlow = new ScrapperThread(this, url, lowest);
            findlow.start();
        }
        while(cnt>0)
            this.wait();
        return lowest;
    }

    // public interface ScrapperListener{
    //     public void findLowest();
    // }
}
