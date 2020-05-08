public class Position {
    private int x;
    private int y;

    public Position(int x, int y) {
        this.x = x;
        this.y = y;
    }

    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public int distanceTo(Position p) {
        return (int) Math.sqrt(
            (x - p.getX()) * (x - p.getX()) +
            (y - p.getY()) * (y - p.getY())
        );
    }

    @Override
    public Position getPosition(){
        return this.posisi;
    }

    @Override
    public void setPosition(Position p){
        this.posisi = p;
    }

}
