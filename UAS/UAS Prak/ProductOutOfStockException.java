class ProductOutOfStockException extends Exception {
    public ProductOutOfStockException(String message) {
        super(message);
    }

    public String getMessage() {
        return super.getMessage();
    }
}
