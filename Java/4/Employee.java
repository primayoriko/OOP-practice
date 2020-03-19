abstract class Employee{
    public boolean hasMarried;
    Employee(){
        this.hasMarried = false;
    }
    public void setHasMarried(boolean st){
        this.hasMarried = st;
    }
    abstract public int calculateSalary(int workHour);
}