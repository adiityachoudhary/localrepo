class Demo {

    int add(int a, int b){
        return a+b;
    }
    int mul(int a, int b){
        return a*b;
    }
    public static void main(String[] args) {
        Demo d1= new Demo();
        System.out.println("Sum : "+ d1.add(5,8));
        System.out.println("Product : "+ d1.mul(5,8));

    }
}