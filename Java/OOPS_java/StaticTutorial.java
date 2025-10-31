// Static Keyword   - can't be instantiated and generally used for common data like school, college, etc
// Static can be :  
// 1. Variable (also known as a class variable) 
// 2. Method (also known as a class method) 
// 3. Block 
// 4. Nested class

class Student{
    String name;
    static String school;

    static void set(String s){
        school=s;
    }
}

public class StaticTutorial {
    public static void main(String[] args){
        Student s1= new Student();
        s1.name="Harry";
        Student.school="DPS";

        System.out.println("Name : "+ s1.name + "\nSchool : " + Student.school);

        s1.set("Loyola");
        System.out.println("New school : " + Student.school);

    }   
}
