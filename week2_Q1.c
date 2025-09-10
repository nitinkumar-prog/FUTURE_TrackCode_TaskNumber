//Write a  program to check whether a number is positive, negative, or zero using if else.
#include<stdio.h>
int main()
{
    int n;
    printf("enter a number:\n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("number is 0");

    }
    else if (n>0)
    {
      printf("number is positive");
    }
    else{

        printf("number is negative");
    }
    return 0;
    
}