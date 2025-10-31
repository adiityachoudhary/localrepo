class Record {
    String name;
    int roll;
    String course;

    Record(String name, int roll, String course) {
        this.name = name;
        this.roll = roll;
        this.course = course;
    }


    //fucntion overloading i.e. fucntions with different parameters
    void display(String name){
        System.out.println("Name: " + this.name);
    }
    void display(String name, int roll){
        System.out.println("Name: " + this.name+ ", Roll: " + this.roll);
    }
    void display(){
        System.out.println("Name: " + this.name+ ", Roll: " + this.roll + ", Course: " + this.course);
    }

}

public class FunctionOverloading {
    public static void main(String[] args) {
        Record r1=new Record("Aditya", 12345, "Btech");

        // function calls with different parameters to show function overloading
        r1.display(r1.name);    
        r1.display(r1.name, r1.roll);
        r1.display();
    }

}
