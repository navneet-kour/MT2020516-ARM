//Circular Queue
#include<stdio.h>
#define size 4
int queue[size];
int *front=queue-1;
int *rear=queue-1;
void add_to_queue(int data)//Inserting Data to Queue
{
    if(rear==queue+size-1 && front!=queue)
    {
        rear=queue;
        *rear=data;
    }
    else if(front==queue-1)//Inserting First element of Queue
	{
         front=rear=queue;
         *rear=data;
    }	
    else
    {
        rear++;
        *rear=data;

    }    

    
    
}
int remove_from_queue()//Removing Data from Queue
{
  int value=*front;
  if(rear==front)
  {
      front=rear=queue-1;
      
  }
  
  else
  {
      if(front==queue+size-1)
      front=queue;
      else
      front++;
  }
  
  return value;
}
void print()//Displaying Data in Queue
{
    printf("Elements in the Circular Queue(FIFO):\n");
    int *disp,*rd;
    if(rear>=front)
    {
        disp=front;
    while(disp<=rear)
    {
        printf("%d\n",*disp);
        disp++;
    }

    }
    else
    {
        disp=front;
        while(disp<queue+size)
        {
            printf("%d\n",*disp);
            disp++;
        }
        rd=queue;
        while(rd<=rear)
        {
            printf("%d\n",*rd);
            rd++;
        }
    }
    

}
void main()
{
    int x,data,flag=1,deleted;
   
   printf("1.Insertion\t 2.Deletion\t 3.PRINT\t 4.Display FRONT & REAR Pointer Value\t 5.EXIT");
   while(flag==1)
   {
       printf("\nEnter the operation you want to perform on Circular Queue:\n");
       scanf("%d",&x);
       switch (x)
       {
       case 1:
              if((rear==queue+size-1 && front==queue) || rear==front-1)
              printf("Queue is Full\n");
              else
              {
                  printf("Enter the data to be inserted\n");
                  scanf("%d",&data);
                  add_to_queue(data);

              }
              break;
      case 2:
             if(front==queue-1)
             printf("Queue is Empty\n");
             else
             {
                 deleted=remove_from_queue();
                 printf("Data deleted from the Circular Queue is:%d\n",deleted);
                
             }
             break;

       case 3:
             if(front==queue-1)
             printf("Queue is Empty\n");
             else
             print();
             break;

       case 4: printf("Front pointer is at %d value \n Rear pointer is at %d value",*front,*rear);
               break;
              
       case 5: flag=0;
              break;            

                   
               
       
       }
   }

}