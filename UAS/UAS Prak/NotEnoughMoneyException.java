public class NotEnoughMoneyException extends Exception {
    public NotEnoughMoneyException(String message) {
        super(message);
    }

    public String getMessage() {
        return super.getMessage();
    }
}
