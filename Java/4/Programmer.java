class Programmer extends Employee{
    Programmer(){
        super();
    }
    public int calculateSalary(int workHour){
        int salary;
        if(workHour<=150){
            salary = 100000 * workHour;
        }
        else{
            salary = 100000 * 150 + (workHour-150) * 10000;
        }
        if(hasMarried){
            salary +=4000000;
        }
        return salary;
    }
}