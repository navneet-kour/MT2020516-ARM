#include<stdio.h>
void main()
{
    int a[20];
    int count=0,i;
    printf("Enter the 20 elements of array:");
    for(i=0;i<20;i++)//Getting input from user
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<20;i++)//Checking divisibility of numbers by 2 and iterating through array to find number of even numbers 
    {
        if(a[i]%2==0)
        count++;
    }
    printf("Number of even numbers in the array is=%d\n",count);
}