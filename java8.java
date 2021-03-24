class Parent{
    void display(){
        System.out.print("Parent "); 
    }
}

class Child extends Parent{
    void display(){
    super.display(); 
    System.out.print("Child");
}
}

public class Test{
    public static void main(String[] args){
        Parent a = new Child(); 
        a.display();
    }
}