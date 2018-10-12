#include<stdio.h>
#include<stdlib.h>
#define size 5
void push();
int pop();
int display();
struct stack
	{
		int stk[size];
		int top;
	}s;
void main()
	{
		int choice;
		int p;
		s.top=-1;
		while(1)
		{
			printf("1\tpush\n");
			printf("2\tpop\n");	
			printf("3\tdisplay\n");
			printf("4\texit\n");
			printf("enter your choice");
			scanf("%d",&choice);
		
			switch(choice)
			{
				case 1:push();
					  break;
				case 2:p=pop();
				           printf("popped element=%d\n",p);
						break;
				case 3:p=display();
						break;
				default:exit(0);
			}
		}
	}	

void push()
	{
		int num;
		if(s.top==size-1)
		{
			printf("stack full\n");
		}
		else
		{
			s.top++;
			printf("enter element to push\n");
			scanf("%d",&num);
			s.stk[s.top]=num;
		}
	}

int pop()
	{
		int l;
		if(s.top==-1)
		{
			printf("stack empty\n");
			return(s.top);
		}
		else
		{
			l=s.stk[s.top];
			s.top--;
			return l;
		}
	}

int display()
	{
		int i;
		if(s.top==-1)
		{
			printf("stack empty\n");
			return(s.top);
		}
		else
		{
			for(i=s.top;i>=0;i--)
			{
				printf("%d\n",s.stk[i]);
			}
		}
	}															
											
	
				
		
