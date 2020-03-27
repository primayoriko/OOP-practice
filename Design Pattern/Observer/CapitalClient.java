public class CapitalClient extends Observer{

    public CapitalClient(Subject subject){
       this.subject = subject;
       this.subject.puts(this);
    }
 
    @Override
    public void notified() {
      secret =  subject.getSecret().toUpperCase(); 
    }
 }