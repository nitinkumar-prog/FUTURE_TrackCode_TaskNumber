//Write a C program to display numbers from 1 to 100 except multiples of 5 using a continue statement. 
#include<stdio.h>
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%5!=0)
        {
            continue;
        }
        printf("%d\t",i);
    }
    return 0;
}