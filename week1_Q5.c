//Write a C program to calculate the sum of the first 100 natural numbers using a while loop. 
#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=1;i<=100;i++)
    { 
        sum=sum+i;

    }
    printf("the sum of the 100 natural numbers is:\t%d",sum);
}