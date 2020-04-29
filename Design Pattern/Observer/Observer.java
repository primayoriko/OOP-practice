public abstract class Observer {
    protected Subject subject;
    protected String secret;
    public abstract void notified();

    public String leakSecret(){
        return secret;
    }
}