public class Cow extends Animal{
    Cow(){
        super(4);
    }
    public void eat(String food){
        this.hungry = !food.equals("grass");
        // if(this.hungry){
        //     System.out.println("aaa");
        // }
    }

    public void run(){
        super.run();
        System.out.println("Cow is running");
    }
}