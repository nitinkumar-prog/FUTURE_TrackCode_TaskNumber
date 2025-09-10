//Write a  program to print the multiplication table of a number using a for loop. 
#include<stdio.h>
int main()
{
    int n,t=0;
    printf("enter a number:\t");
    scanf("%d",&n);
    printf("table is:\n");
    for(int i=1;i<=10;i++)
    {
        t=n*i;
        printf("%d\t",t);
    }
    return 0;
    
}