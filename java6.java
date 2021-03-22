public class java6{   
    public int add(int a, int b){
        return a+b;
    }
    public double add(double a, double b){
        return a+b;
    }   
    public static void main(String []args){       
    	java6 s = new java6();       
        System.out.print(s.add(5,4) + " ");
        System.out.println(s.add(5.0,4.0));       
    }
}