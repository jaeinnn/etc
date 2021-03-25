package test;
class Basic{
    
    int[] a; 
    public Basic(){
        this.a = new int[]{1,2,3};
    }
    public Basic(int[] a){
        this.a = a; 
    }
    
    public void display(){
        for(int i=0; i<a.length; i++){
            System.out.print(a[i] +" ");
        }
    }
    
    public static void main(String[] args){
        int[] a = new int[3]; 
        
        for(int i=0; i<a.length; i++){
            a[i] = i; 
        }
        Basic obj = new Basic(a); 
        obj.display(); 
    }
}