#include<stdio.h>
void main()
{
    int a[20];
    int small,i,flag,temp,k;
    printf("Enter the 20 elements of array:\n");
    for(i=0;i<20;i++)//Getting input from user
    {
        scanf("%d",&a[i]);
    }
    printf("Input array is:\n");
    for(i=0;i<20;i++)
    {
        printf("%d,",a[i]);
    }
    for(k=1;k<=19;k++)//Algorithm for Bubble Sort
    {
        flag=0;
        for(i=0;i<=20-k-1;i++)
        {
            if(a[i]>a[i+1])//Swapping
            {   flag=1;
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
        if(flag==0)
        break;
    }
    
    printf("\nArray in ascending order:\n");
    for(i=0;i<20;i++)
    {
        printf("%d,",a[i]);
    }
}