import java.util.ArrayList;

class Scrapper implements ScrapperThread.Server{
    private ArrayList<String> urlList;
    private int lowest, cnt;
    public Scrapper() {
        urlList = new ArrayList<String>();
    }

    public void addUrl(String url) {
        urlList.add(url);
    }

    @Override
    public synchronized void sendPrice(int price){
        this.lowest = Math.min(this.lowest, price);
        this.cnt--;
        this.notify();
    }

    public int scrapLowestPrice() {
        // Kode berikut masih melakukan scrap ke banyak website
        // secara sekuensial. Agar lebih cepat, ubahlah kode di bawah ini
        // menjadi paralel menggunakan wait dan notify, dengan membuat
        // instance ScrapperThread
        // Hint: baca materi praktikum
        this.lowest = Integer.MAX_VALUE;
        this.cnt = urlList.size();
        for (String url : urlList) {
            // Website website = new Website(url);
            Thread findlow = new ScrapperThread(this, url);
            findlow.start();
        }
        while(cnt>0){
            try{
                this.wait();
            }
            catch(Exception e){}
        }    
        return this.lowest;
    }
}
