public class downpattern {
      public static void main(String[] args) 
     {
       int a[][]=new int[3][7];
       int mid=7/2;
       for(int i=0;i<4;i++)
       {
        for(int j=0;j<7;j++)
        {
            if(j>=(mid-i)&&j<=(mid+i))
            {
                System.out.print("*");
            }
            else{
                System.out.print(" ");
            }
            
        }
        System.out.println();
       }
        
    }
            
    
}
