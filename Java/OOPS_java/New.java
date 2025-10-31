class Pen{
    String color;
    String brand;

    public void write(){
        System.out.println("Writing with "+ this.brand +" and the color is "+ this.color); //this is same as self in python
    }
}
public class New{
    public static void main(String[] args){
        Pen p1= new Pen();
        p1.color="Red";
        p1.brand="Linc";
        p1.write();

        Pen p2=new Pen();
        p2.brand="Agni ICY gel";
        p2.color="Red";
        p2.write();
    }

}