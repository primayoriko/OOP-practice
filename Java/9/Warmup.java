class Test{
    private int v1;
    public String v2;
    Test(){

    }

    private void fun1(){

    }

    public static int fun2(){
        return 101;
    }
}

class GameState{
    public GameState(){}
}

class CardList{
    public CardList(){}
}

class Player {
    public GameState gameState; // null
    public CardList cards; // null
    public Player(){}
  }

public class Warmup {
    public static void main(String[] args){
        Injector injector = new Injector();
        GameState gameState1 = new GameState();
        GameState gameState2 = new GameState();
        Player player = new Player();
        CardList cards = new CardList();
// Asumsi gameState dan cards sudah terinisialisasi
        injector.addDependencies(gameState1);
        injector.addDependencies(gameState2);
        injector.addDependencies(cards);

        // Setelah melakukan inject, nilai gameState pada card tidak bernilai null
        try{
            injector.inject(player);
        } catch(Exception e){
            e.printStackTrace();
        }
        

        System.out.println(player.cards == cards); // true);  // true
        System.out.println(player.gameState == gameState2);  // true
        // Test a = new Test();
        // Class c = Test.class;
        // Field[] f = c.getDeclaredFields();
        // System.out.println(f[0]);
        // // try{
        // //     Class c = Class.forName("Test");
        // // }
        // // catch(Exception e){
        // //     e.printStackTrace();
        // // }
        // // System.out.println(c);
    }
}