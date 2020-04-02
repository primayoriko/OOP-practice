
public class PizzaBuilder {
    private Pizza P;

    PizzaBuilder(){
        this.P = new Pizza();
    }

    public PizzaBuilder size(String s){
        if(s.equals("small")){
            P.setDiameter(25);
        }
        else if(s.equals("medium")){
            P.setDiameter(35);
        }
        else if(s.equals("large")){
            P.setDiameter(40);
        }
        return this;
    }

    public PizzaBuilder crust(String s){
        P.setCrust(s);
        return this;
    }

    public PizzaBuilder addTopping(String s){
        if(s.equals("Meat Lovers")){
            P.addToppingIngredient("beef");
            P.addToppingIngredient("mozarella");
        }
        else if(s.equals("Tuna Melt")){
            P.addToppingIngredient("tuna");
            P.addToppingIngredient("corn");
            P.addToppingIngredient("mozarella");
        }
        else if(s.equals("Supreme")){
            P.addToppingIngredient("pepperoni");
            P.addToppingIngredient("beef");
            P.addToppingIngredient("mushroom");
            P.addToppingIngredient("pineapple");
        }
        return this;
    }

    public Pizza build(){
        P.setPrice(15 * P.getDiameter() + 10 * P.getToppingIngredients().size());
        if(P.getCrust().equals("Stuffed")){
            P.setPrice(P.getPrice() + 20);
        }
        else if(P.getCrust().equals("Cheesy Bites")){
            P.setPrice(P.getPrice() + 10);
        }
        return this.P;
    }
}