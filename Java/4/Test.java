import java.lang.reflect.*;
class A{
  public A(){}

  public A(int a){}

  public void print(){
    System.out.println("I'm a");
  }
}

class B extends A{
  @Override 
  public void print(){
    super.print();
    System.out.println("I'm b");
  }
}

public class Test{
    static Class c = Test.class;
    static int z;
    // z = 4;
    // c.cast(this.z);
    public static void main(String[] args) {
        test3();
    }

    public static void test3(){
      // String s = z;
      c.cast(z);
      System.out.println(z);
    }

    public static void test2(){
      B b = new B();
      A a = (A)b;
      a.print();
      System.out.println(a.getClass());
    }

    public static void test1(){
    //   Mahasiswa a = new Mahasiswa(1,2,4.5);
    //   Mahasiswa b = new Mahasiswa(2,3,2.2);
    //   if(a.compareTo(b)!=0){
    //     System.out.println("sadsa");
    //   }
    }
}