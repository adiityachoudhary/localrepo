class Student {
    String name;
    int roll;

    void display() {
        System.out.println("Hello!! " + this.name + " Your Roll no. is : " + this.roll);
    }

    Student(){
        System.out.println("Constructor called!!");
    }
}

public class Unparameterized{
    public static void main(String[] args){
        Student s1= new Student();
        s1.name="Aditya";
        s1.roll=12345;
        s1.display();
        
    }
}