#include<stdio.h>
#include<stdlib.h>
#define size 5

void enqueue(int num);
int dequeue();
void display();

int queue[size];
int front=-1;
int rear=-1;

void main()
{
	int choice,item,num;
	do
	{	printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
		scanf("%d",&choice);
		switch(choice)
		{
		case 1:printf("\nenter number to be inserted\n");
			scanf("%d",&item);
			enqueue(item);
			break;
		case 2:num=dequeue();
			printf("\nelement deleted is %d",num);
			break;
		case 3:display();
			break;
		case 4:exit(1);
			break;
		default:printf("inavlid choice");
		}					 
	}while(1);
}

void enqueue(int num)
{	
	if(front==(rear+1)%size)
	{
		printf("queue full");
		
	}
	else if(front==-1)
	{
		front=0;
		rear=0;
		queue[rear]=num;
	}
	else
	{
		rear=(rear+1)%size;
		queue[rear]=num;			
	}
}

int dequeue()
{	int n;
	if(front==-1)
	{
		printf("\nqueue empty");
	}
	else if(front==rear)
	{
		n=queue[front];
		front=-1;
		rear=-1;
		
	}	
	else
	{
		n=queue[front];
		front=(front+1)%size;
		
	}
return n;
}
			

void display()
{
	int i;
	if(front==-1)
	{
		printf("\nqueue is empty");
	}	
	else if(rear>=front)
	{	
		printf("element are\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d",queue[i]);
		}	
	}
	else
	{
		printf("element are");
		for(i=front;i<=size-1;i++)
		{
			printf("%d",queue[i]);				
		}
		
			for(i=0;i<=rear;i++)
			{
				printf("%d",queue[i]);
			}
		
	}
}				


























































































































































