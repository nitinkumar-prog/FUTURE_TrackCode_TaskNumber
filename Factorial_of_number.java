public class Factorial_of_number {
    public static int factorial(int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }

    public static void main(String[] args) {
        int result = factorial(6);  
        System.out.println(result); 
    }

}
