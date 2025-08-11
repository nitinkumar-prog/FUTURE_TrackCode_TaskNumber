public class pattern {
     public static void main(String[] args) 
     {
        int n=4;
        int z=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=n-1;j>=i;j--)
            {
                System.out.print(" ");

            }
            for(int k=1;k<=z;k++)
            {
                System.out.print("*");
            }
            z+=2;
            System.out.println();
        }
     }
    
}
