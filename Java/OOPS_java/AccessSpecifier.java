// access specifiers

class Account {

    String name; // default access specifier - used only inside the package
    protected String email; // protected - accessed only through inheritance
    private String password; // private - cannot accessed outside the class

    public void greet() { // public - can be accessed everywhere even outside the package
        System.out.println("Hello " + this.name);
    }

    public void setPassword(String pass) {      //setter method
        this.password = pass;
    }

    public void getPassword() {                 //getter method
        System.out.println(this.password);
    }

}

public class AccessSpecifier {
    public static void main(String[] args) {
        Account myacc = new Account();
        myacc.name = "Harry";
        myacc.email = "email@gmail.com";
        myacc.greet();

        myacc.setPassword("qwerty123");
        myacc.getPassword();
    }
}
