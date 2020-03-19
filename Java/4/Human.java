public class Human extends Animal{
    Human(){
        super(2);
    }
    public void eat(String food){
        this.hungry = food.equals("teman");
        // if(this.hungry){
        //     System.out.println("aaa");
        // }
    }
    public void run(){
        System.out.println("Human is running");
    }
}