//Write a C program to determine whether a year is a leap year using if-else.
#include<stdio.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);
    if(year%400==0||year%4==0)
    {
        printf("Year is leap year");
    }
    else{
        printf("Year is not a leap year");
    }
    return 0;
}
