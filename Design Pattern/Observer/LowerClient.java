public class LowerClient extends Observer{

    public LowerClient(Subject subject){
       this.subject = subject;
       this.subject.puts(this);
    }
 
    @Override
    public void notified() {
      secret =  subject.getSecret().toLowerCase(); 
    }
 }