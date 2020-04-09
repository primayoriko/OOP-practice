// File AccountTest.java
public class AccountTest {
    public AccountTest() {
       // Tidak melakukan apa-apa
    }
  
    public void test() {
       // Melakukan tes terhadap method transfer.
       // Asumsikan method lainnya benar.
        Account a = AccountFactory.withBalance(20);
        Account b = AccountFactory.withBalance(30);
        assert a.getBalance() ==20;
        assert b.getBalance() ==30;  

        try{
            b.transfer(a, 10);
        } catch (Exception e){
            assert false;
        }

        assert a.getBalance() ==30;
        assert b.getBalance() ==20;
        assert b.getNumOfTransaction()==1;
        assert a.getNumOfTransaction()==0;

        try{
            b.transfer(a, 100);
        } catch (Exception e){
            assert true;
        }

        assert a.getBalance() ==30;
        assert b.getBalance() ==20;
        assert b.getNumOfTransaction()==2;
        assert a.getNumOfTransaction()==0;

    }
  }