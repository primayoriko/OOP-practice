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
        try{
            injector.addDependencies(gameState1);
            injector.addDependencies(gameState2);
            injector.addDependencies(cards);
        // Setelah melakukan inject, nilai gameState pada card tidak bernilai null
            injector.inject(player);
        } catch(Exception e){
            e.printStackTrace();
        }
        

        System.out.println(player.cards == cards); // true);  // true
        System.out.println(player.gameState == gameState2);  // true
        System.out.println(player.cards.getClass().getCanonicalName()); // true);  // true
        System.out.println(player.gameState.getClass().getCanonicalName());
    }
}