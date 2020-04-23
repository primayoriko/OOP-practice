import java.lang.reflect.*;

public class LaptopTest {
    // Anda boleh menambahkan atribut yang diperlukan
    Class c;
    public LaptopTest(String className) {
        try{
            this.c = Class.forName(className); 
        }
        catch(Exception e){
            System.out.println("Tidak ada kelas dengan nama yang diberikan");
        }
    }

    public boolean testMethods() {
        Method[] f = this.c.getDeclaredMethods();
        if (f.length == 1/* hanya ada 1 method di kelas yang diberikan */) {
            if(f[0].getName() != "getRamSize"){
                System.out.println("Nama method harus getRamSize");
                return false;
            }
            if(f[0].getReturnType() != int.class){
                System.out.println("Tipe return method harus Integer");
                return false;
            }
            return true;
        } else {
            System.out.println("Banyaknya method hanya boleh 1");
            return false;
        }
    }

    public boolean testFields() {
        Field[] f = this.c.getDeclaredFields();
        if (f.length == 1/* hanya ada 1 field di kelas yang diberikan */) {
            if(f[0].getName() != "serialNumber"){
                System.out.println("Nama field harus serialNumber");
                return false;
            }
            if(f[0].getType() != String.class){
                System.out.println("Tipe field harus String");
                return false;
            }
        }
        System.out.println("Banyaknya field hanya boleh 1");
        return false;
    }
}
