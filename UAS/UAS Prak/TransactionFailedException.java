public class TransactionFailedException extends Exception {
    public TransactionFailedException(String msg) {
        super(msg);
    }

    public String getMessage() {
        return super.getMessage();
    }
}
