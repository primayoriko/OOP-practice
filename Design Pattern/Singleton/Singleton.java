public class Singleton{
    private static Singleton objek = new Singleton();
    //Elemen atau variabel lain yang diperlukan, contoh:
    String secretWord = "Hello World!";

    private Singleton(){}

    public static Singleton getObjek(){
        return objek;
    }

    //Method lain yang diperlukan, contoh:
    public String getSecretWord(){
        return "Butuh sandi";
    }

    public String getSecretWord(int pass){
        if(pass == (int)1e9+7){
            return secretWord;
        }
        return "Sandi Salah";
    }
}