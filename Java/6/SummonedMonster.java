
public class SummonedMonster implements ISummoned {
    private Monster monster;
    private boolean attack;
    private boolean opened;
    SummonedMonster(Monster M, boolean opened, boolean attack){
        this.monster = M;
        this.opened = opened;
        this.attack = attack;
    }

    public boolean flip(){
        if(this.opened){
            return false;
        }
        else{
            this.opened = true;
            return true;
        }
    }

    public void rotate(){
        this.attack = !this.attack;
    }

    public int getPositionValue(){
        if(this.attack){
            return this.monster.getAttackValue();
        }
        else{
            return this.monster.getDefenseValue();
        }
    }

    public void render(){
        String a, b;
        if(this.attack){
            a = "menyerang";
        }
        else{
            a = "bertahan";
        }
        if(this.opened){
            b = "terbuka";
        }
        else{
            b = "tertutup";
        }

        System.out.println("Monster " + this.monster.getName()+" dalam keadaan "+b+" dengan posisi "+a);
    } 
}