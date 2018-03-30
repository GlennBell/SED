public class Assignment {
    public static void main (String[] args){
        double right = 6.0;
        double left = 10.0;
        double answer, a, b;

        System.out.println("A = " + left);
        System.out.println("B = " + right);

        // Assignment
        System.out.println("\nAssignment");
        answer = left + right;
        System.out.println("A(" + left +
                           ") + B(" + right +
                           ") = " + answer);

        // Unary Operators
        System.out.println("\nUnary Operator");
        a = left;
        b = right;

        System.out.println("A++ = " + a++);
        a = left;
        System.out.println("++A = " + ++a);
        System.out.println("B-- = " + b--);
        b = right;
        System.out.println("--B = " + --b);

        // Power function
        System.out.println("\nPower Function");
        a = left;
        b = right;

        System.out.println("A^B = " + Math.pow(a, b));
    }
} 
