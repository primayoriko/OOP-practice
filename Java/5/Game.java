import java.util.*;

public class Game{
    static void run(String[] hojun, String[] qila){
        Map<String, Integer> m = new HashMap<String, Integer>();
        for(String a: hojun){
            Integer freq = m.get(a);
            m.put(a, (freq==null)?1:freq+1);
        }

        for(String a: qila){
            Integer freq = m.get(a);
            if(freq!=null && freq !=0){
                m.put(a, freq-1);
            }
        }

        for(String a:m.keySet()){
            //System.out.println(a);
            for(int i=0;i<m.get(a);i++){
                System.out.println(a);
            }
        }
    }
}