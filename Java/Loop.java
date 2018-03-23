// Demonstrate loops
// For Loop

public class Loop {
    public static void main(String [] args) {
        int i;

        System.out.println("For Loop: Count up by 2");
        for(i=1; i<=10; i+=2){
            System.out.println(i);
        }
    
        System.out.println("While Loop: Count down by 2");
        while( i > 0 ){
            System.out.println(i);
            i = i - 2;
        }
    }
}
