//Empty Ascending Stack
#include<stdio.h>
#define size 5//Size of the Stack
int stack[size];
int *sp=stack;

void Push(int data)//Push Function
{
    
    *sp=data;
    sp++;
}
int Pop()//POP Function
{
    int value= *(sp-1);
    sp--;
    return value;
}
void print()//Print Function
{
    printf("Elements in the stack(LIFO):\n");
    int *dis;
    dis=sp-1;
    while(dis>=stack)
    {
        printf("%d\n",*dis);
        dis--;
    }
}
void main()
{
   int x,data,flag=1,popped;
   
   printf("1.PUSH\n 2.POP\n 3.PRINT\n 4.EXIT");
   while(flag==1)
   {
       printf("\nEnter the operation you want to perform on STACK:\n");
       scanf("%d",&x);
       switch (x)
       {
       case 1:
           if(sp>stack+size-1)
           {
               printf("Stack is Full\n");
           }
           else
           {
           printf("Enter value to be pushed\n");
           scanf("%d",&data);
           Push(data);
           }
           break;
       case 2:
           if(sp==stack)
           {
             printf("Stack is empty\n");
            
           }
           else
           {
           popped=Pop();
           printf("Data popped from the Stack is:%d\n",popped);
           }
           break;
       case 3:
           if(sp==stack)
           {
             printf("Stack is empty\n");
            
           }
           else
           {
           print();
           }
           break;
       case 4: 
            flag=0;
            break;            
       
       
       }
   }
   


   


}