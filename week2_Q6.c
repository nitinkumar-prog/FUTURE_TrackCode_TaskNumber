//Write a program to dynamically allocate memory for an integer array and calculate its sum using malloc()
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i;
    int *arr;
    int sum=0;
    printf("enter the length");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("memory is not allocated.");
        exit(0);
    }
        else{
            printf("enter the %d elements",n);
            for(int i=0;i<n;i++)
            {
            scanf("%d",(arr+i));
            sum=sum+*(arr+i);

        }
        printf("sum is: %d",sum);
        free(arr);
        return 0;
    }
}
