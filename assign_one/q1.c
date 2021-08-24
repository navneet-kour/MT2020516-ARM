#include<stdio.h>
#include<limits.h>
void main()
{
    int a[3];
    int i;
    printf("Enter three numbers:");
    for(i=0;i<3;i++) //Getting input from user
     scanf("%d",&a[i]);
    int large=INT_MIN;
    for(i=0;i<3;i++)//Comparing numbers and iterating through array to find largeest number
    {
        if(large<a[i])
        large=a[i];
    }
    printf("The largest number out of three is=%d\n",large);
}

