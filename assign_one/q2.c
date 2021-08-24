#include<stdio.h>
#include<limits.h>
void main()
{
    int a[15];
    int large,i;
    printf("Enter the array of 15 numbers:");
    for(i=0;i<15;i++)//Getting input from user
    {
        scanf("%d",&a[i]);
    }
    large=INT_MIN;
    for(i=0;i<15;i++)//Comparing numbers and iterating through array to find largeest number
    {
        if(large<a[i])
        large=a[i];
    }
    printf("The largest number out of the Array is=%d\n",large);

}