class Student {
    String name;
    int roll;

    void display() {
        System.out.println("Hello!! " + this.name + " Your Roll no. is : " + this.roll);
    }

    Student(String name, int roll){
        this.name =name;
        this.roll= roll;
        System.out.println("Name : " +this.name);
        System.out.println("Roll no. : " +this.roll);
        display();
    }
}

public class Parameterized{
    public static void main(String[] args){
        Student s1= new Student("Aditya", 12345);        
    }
}