public abstract class Makhluk {
    protected Subject subject;
    protected String secret;
    public abstract void notified();

    public String leakSecret(){
        return secret;
    }
}