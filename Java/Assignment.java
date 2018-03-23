public class Assignment {
    public static void main (String[] args){
        double right = 4.0;
        double left = 10.0;
        double answer, a, b;

        System.out.println("left = " + left);
        System.out.println("right = " + right);

        // Assignment
        answer = left + right;
        System.out.println("left(" + left +
                           ") + right(" + right +
                           ") = " + answer);

        // Unary Operators
        a = left;
        b = right;

        System.out.println("left++ = " + a++);
        a = left;
        System.out.println("++left = " + ++a);
        System.out.println("right++ = " + b++);
        b = right;
        System.out.println("++right = " + ++b);

        // Power function
        a = left;
        b = right;

        System.out.println("left^right = " + Math.pow(a, b));
    }
} 
