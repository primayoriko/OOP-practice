import java.util.*;
// import java.util.LinkedList;
// import java.time.Instant;

// public class Util {
//     public static long getTime() {
//     // mengembalikan waktu sekarang dalam milisekon
//         return Instant.now().toEpochMilli();
//     }
// }

class Test{
    //Util x = new Util();
    private List<Integer> list;
    private int n;

    Test(ArrayList<Integer> x, int n){
        this.list = x;
        this.n = n;
    }

    Test(LinkedList<Integer> x, int n){
        this.list = x;
        this.n = n;
    }

    public void reset(){
        this.list.clear();
        for(int i=0;i<n;i++){
            this.list.add(0);
        }
    }

    public long get(int idx){
        reset();
        long t1 = Util.getTime();
        this.list.get(idx);
        long t2 = Util.getTime();
        return t2-t1;
    }

    long del(int idx, int t){
        reset();
        long t1 = Util.getTime();
        for(int i=0;i<t;i++){
            this.list.remove(idx);
        }
        long t2 = Util.getTime();
        return t2-t1;
    }
}