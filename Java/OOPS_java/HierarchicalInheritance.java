class Shape_hierarchical{
    int radius;
    double pi=3.141;

    Shape_hierarchical(int r){
        this.radius=r;
    }
}
class Circle1 extends Shape_hierarchical{   //single inheritance

    Circle1(int r){
        super(r);
        System.out.println("Operations of Shape : Circle");
    }

    double area(){
        return pi * Math.pow(this.radius,2);
    }
    double circumference(){
        return 2 * pi * this.radius;
    }

}
class Sphere extends Shape_hierarchical{   //single inheritance

    Sphere(int r){
        super(r);
        System.out.println("Operations of Shape : Sphere");
    }

    double area(){
        return 4*pi * Math.pow(this.radius,2);
    }
    double volume(){
        return 4/3.0 * pi * Math.pow(this.radius,3);
    }

}
public class HIerarchicalInheritance {
    public static void main(String[] args){
        Circle1 c1= new Circle1(14);  //object created and parameter passed
        System.out.println("Area of circle : "+ c1.area());
        System.out.println("Circumference of circle : "+ c1.circumference());

        Sphere s1= new Sphere(12);
        System.out.println("Area of sphere : "+ s1.area());
        System.out.println("Volume of sphere : "+ s1.volume());

    }
}
