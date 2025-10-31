// Interfaces 
// ● All the fields in interfaces are public, static and final by default. 
// ● All methods are public & abstract by default. 
// ● A class that implements an interface must implement all the methods declared in the interface. 
// ● Interfaces support the functionality of multiple inheritance.

interface Animal{
    int eyes=2;
    void walk();
}

interface Herbivore{
    String food="grass";
}

class Horse implements Animal,Herbivore{
    public void walk(){
        System.out.println("Can walk on 4 legs, have eyes: "+ eyes +" and eats : "+ food) ;
    }
}

public class InterfaceTutorial {
    public static void main(String[] args){
        Horse h1= new Horse();
        h1.walk();
    }
}
