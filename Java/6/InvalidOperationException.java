public class InvalidOperationException extends Throwable{
    private String opType;
    private String description;
    InvalidOperationException(String opT, String desc){
        super();
        this.description = desc;
        this.opType = opT;
    }
    public String getOpType(){
        return this.opType;
    }
    public String getDescription(){
        return this.description;
    }
}