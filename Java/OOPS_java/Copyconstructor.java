class Student {
    String name;
    int roll;

    void display() {
        System.out.println("Hello!! " + this.name + " Your Roll no. is : " + this.roll);
    }

    Student(String name, int roll){   //empty constructor
        this.name=name;
        this.roll=roll;
    }

    Student(Student s2){        //copy constructor
        this.name=s2.name;
        this.roll=s2.roll;
    }
}

public class Copyconstructor{          //public class
    public static void main(String[] args){

        Student s1= new Student("Aditya", 12345); // object 1 created
        
        Student s2= new Student(s1);  // object1 copied in object2 using copy constructor
        s2.display();
    }
}