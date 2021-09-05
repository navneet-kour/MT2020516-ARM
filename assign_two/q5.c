//Simple Queue
#include<stdio.h>
#define size 5
int queue[size];
int *front=queue-1;
int *rear=queue-1;
void add_to_queue(int data)//Inserting Data to Queue
{
    rear++;
    *rear=data;
    if(front==queue-1)
		front=queue;

}
int remove_from_queue()//Removing Data from Queue
{
  int value=*front;
  front++;
  return value;
}
void print()//Displaying Data in Queue
{
    printf("Elements in the Simple Queue(FIFO):\n");
    int *disp;
    disp=front;
    while(disp<=rear)
    {
        printf("%d\n",*disp);
        disp++;
    }

}
void main()
{
    int x,data,flag=1,deleted;
   
   printf("1.Insertion\t 2.Deletion\t 3.PRINT\t 4.EXIT");
   while(flag==1)
   {
       printf("\nEnter the operation you want to perform on Queue:\n");
       scanf("%d",&x);
       switch (x)
       {
       case 1:
              if(rear==queue+size-1)
              printf("Queue is Full\n");
              else
              {
                  printf("Enter the data to be inserted\n");
                  scanf("%d",&data);
                  add_to_queue(data);

              }
              break;
      case 2:
             if(front==queue-1 || front==rear+1)
             printf("Queue is Empty\n");
             else
             {
                 deleted=remove_from_queue();
                 printf("Data deleted from the Queue is:%d\n",deleted);
                
             }
             break;

       case 3:
             if(front==queue-1 || front==rear+1)
             printf("Queue is Empty\n");
             else
             print();
             break;

       case 4:
              flag=0;
              break;      

                   
               
       
       }
   }

}