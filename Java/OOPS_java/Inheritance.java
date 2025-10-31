class Shape{
    int radius;
    double pi=3.141;
}
class Circle extends Shape{   //single inheritance

    Circle(int r){
        this.radius=r;
    }

    double area(){
        return pi * Math.pow(this.radius,2);
    }
    double circumference(){
        return 2 * pi * this.radius;
    }

}
public class Inheritance {
    public static void main(String[] args){

        Circle c1= new Circle(14);  //object created and parameter passed
        System.out.println("Area of circle with r: "+ c1.radius+ " is "+ c1.area());
        System.out.println("Circumference of circle with r: "+ c1.radius+ " is "+ c1.circumference());

    }
}
