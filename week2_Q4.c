//Write a  program to reverse a number and check whether it is a palindrome.
#include<stdio.h>
int main()
{
    int n,reverse=0;
    printf("enter the number:\t");
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        int rem=n%10;
        reverse=reverse*10+rem;
        n=n/10;

    }
    printf("reversing number is %d \n",reverse);
    if(temp==reverse)
    { printf("the number is palindrome.\n");

    }
    else{
        printf("number is not a palindrome number");
    }
    return 0;
}