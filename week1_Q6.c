//Write a C program to print the multiplication table of a given number using a for loop. 
#include<stdio.h>
int main()
{ int n,Table=1;
    printf("enter the number for multiplication table:\t");
    scanf("%d",&n);
    printf("Table of %d is:\n",n);
    for(int i=1;i<=10;i++)
    {
        Table=n*i;
        printf("%d\n",Table);
    }
    return 0;
    


}