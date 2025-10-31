class Shape {
    int base;
    int height;
}

class Triangle extends Shape { // single inheritance

    Triangle(int b, int h) {
        this.base = b;
        this.height = h;
    }

    double area() {
        return (1 / 2.0 * this.base * this.height);
    }
}

class EquilateralTriangle extends Triangle { // multi level inheritance

    EquilateralTriangle(int side) {
        super(side, side); // super keyword is used to call constructor of the immediate parent class
    }
}

public class MultiLevelInheritance {
    public static void main(String[] args) {
        // single inheritance
        Triangle t1 = new Triangle(8, 12);
        System.out.println("Area of triangle : " + t1.area());

        // multi level inheritance
        EquilateralTriangle t2 = new EquilateralTriangle(10);
        System.out.println("Area of equilateral triangle : " + t2.area());
    }
}
