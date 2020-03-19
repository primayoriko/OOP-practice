public class Goose{
    public int honk;
    public String name;
    Goose(){
        this.name = "Horrible";
        this.honk = 1;
    }
    Goose(String name, int honk){
        this.name = name;
        this.honk = honk;
    }

    public String toString(){
        String ans= "";
        for(int i=0; i<this.honk;i++){
            ans+="honk";
            if(i<this.honk-1){
                ans+=" ";
            }
        }
        return this.name+" goose says "+ans;
    } 

    public void steal(String obj){
        System.out.println(this.name+" steals "+obj);
    }

}