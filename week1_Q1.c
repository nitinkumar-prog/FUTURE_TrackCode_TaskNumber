//Write a C program to check whether a number is even or odd using an if-else 

#include<stdio.h>
int main()
{
   int n;
   printf("enter the number:\n");
   scanf("%d",&n);
   if(n%2==0)
   {
    printf("Given number is even");
   }
   else{
    printf("Given number is odd");
   }
 return 0;
}