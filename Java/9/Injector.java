import java.util.Map;
import java.util.TreeMap;
import java.lang.reflect.*;

public class Injector {
    Map<String, Object> container;
    
    public Injector(){
        this.container = new TreeMap<>();
    }
    // Menerima sebuah definisi dependencies
    // yang berupa sebuah instansiasi kelas
    // Catatan: Injector bisa menampung lebih dari 1 dependency,
    //          jadi injector bisa menginject banyak sekaligus.
    //          Jika ada 2 objek dengan kelas yang sama,
    //          inject dengan object terakhir yang di add ke daftar dependency
    void addDependencies(Object object){
        String s = object.getClass().getCanonicalName();
        // System.out.println(s);
        this.container.put(s, object);
    }
    /*
      Menginjeksi dependencies yang telah dibuat ke dalam objek
      Injeksi dilakukan dengan mengacu pada dependencies yang ditambah
      pada method addDependencies.
  
      Setiap field di object yang diinject, bila kelasnya
      sudah ditambahkan sebagai dependency, maka akan diset sebagai
      object yang sudah di add didependency.
    */
    void inject(Object object) throws Exception {
        Class c = object.getClass();
        Field[] f = c.getDeclaredFields();
        for(Field i : f){
            String s = i.getType().getCanonicalName();
            // System.out.println(s);
            i.setAccessible(true);
            Object temp = container.get(s);
            if(temp != null){
                i.set(object, temp);
            }
        }
    }
  }

