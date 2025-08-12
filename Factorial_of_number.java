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
// public class downpattern {
//       public static void main(String[] args) 
//      {
//        int a[][]=new int[3][7];
//        int mid=7/2;
//        for(int i=0;i<4;i++)
//        {
//         for(int j=0;j<7;j++)
//         {
//             if(j>=(mid-i)&&j<=(mid+i))
//             {
//                 System.out.print("*");
//             }
//             else{
//                 System.out.print(" ");
//             }
            
//         }
//         System.out.println();
//        }
        
//     }
            
    
// }

