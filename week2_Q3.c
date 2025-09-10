//Write a function to find the factorial of a number using recursion. 
#include<stdio.h>
int fact(int n)
{
    if(n==0||n==1)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main()
{ int n;
    printf("enter a number to factorial:\n");
    scanf("%d",&n);
    printf("factorial is:%d",fact(n));
    return 0;

}