//singly linked list


#include<stdio.h>
#include<stdlib.h>

struct node
{
        int data;
        struct node *next; 
 };
 
 struct node *head;
 
 void create();
 void insertat();
 void delete();
 void search();
 void display();
 
 void create()
 {
        struct node *new,*temp;
        new=(struct node *)malloc(sizeof(struct node));
        new->next=NULL;
        printf("\nenter data to be inserted\n");
        scanf("%d",&new->data);
        if(head==NULL)
        {
                head=new;
                
        }
        else
        {
                temp=head;
                while(temp->next!=NULL)
                {
                        temp=temp->next;        
                }
                temp->next=new;
         }                                   
 } 
 
 void insertat(int pos)
 {
        struct node *new,*temp;
        int i;
        new=(struct node *)malloc(sizeof(struct node));
        new->next=NULL;
        printf("enter data to be inserted");
        scanf("%d",&new->data);
        if(pos==1)
        {
                new->next=head;
                head=new;
        }
        else
        {
                temp=head;
                for(i=1;i<pos-1;i++)
                {
                     temp=temp->next;
                }
                new->next=temp->next;
                temp->next=new;
        }                                    
 }
 
 void delete(int pos)
 {	
        struct node *temp,*ptr;
        int i;
        if(head==NULL)
        {
                printf("list id empty");
        }
        else if(pos==1)
        {
                temp=head;
                head=head->next;
                free(temp);
         }
         else
         {
                temp=head;
                for(i=1;i<pos-1;i++)
                {
                        temp=temp->next;
                }
                ptr=temp->next;
                temp->next=ptr->next;
                free(ptr);
          }
 }
 		
 void search(int ele)
 {
 	struct node *temp;
 	int p,flag=0;
 	if(head==NULL)
 	{
 		printf("list is empty");
 		
 	}
 	else
 	{
 		temp=head;
 		while(temp!=NULL)
 		{
 			p=temp->data;
 			if(p==ele)
 			{
 				flag=1;
 				break;	
 			}
 			temp=temp->next;
 		}
 		if(flag==1)
 		{
 			printf("element found");
 		}
 		else
 		{
 			printf("element not found");
 		}
 	}
 }
 
 void display()
 {
 	struct node *temp;
 	int count=0;
 	if(head==NULL)
 	{
 		printf("link list is empty");
 	}
 	else
 	{
 		temp= head;
 		while(temp!=NULL)
 		{
 			count++;
 			printf("\t<-%d->",temp->data);
 			temp=temp->next;
 		}
 		printf("\n nodes available are =%d",count);
 	}
 }
 
 void main()
 {
 	int choice,n1,n2,n3;
 	do
 	{
 		printf("\nenter your choice\n");
 		printf("\n1.create\n2.insert at\n3.delete\n4.display\n5.search\n");
 		scanf("%d",&choice);
 		switch(choice)
 		{
 			case 1:	create();
 					break;
 					
 			case 2:	printf("enter the position to insert");
 					scanf("%d",&n1);
 					insertat(n1);
 					break;
 				
 			case 3:	printf("ente the position to delete");
 					scanf("%d",&n2);
 					delete(n2);
 					break;	
 			
 			case 4:	display();
 					break;
 			
 			case 5:	printf("enter position to search");
 					scanf("%d",&n3);
 					search(n3);
 					break;	
 			
 			case 6:	exit(1);
 					break;
 					
 			default:	printf("invalid choice!!!");
 		}
 	}while(1);
 }	
/*enter your choice

1.create
2.insert at
3.delete
4.display
5.search
1

enter data to be inserted
1

enter your choice

1.create
2.insert at
3.delete
4.display
5.search
1

enter data to be inserted
2

enter your choice

1.create
2.insert at
3.delete
4.display
5.search
1

enter data to be inserted
3

enter your choice

1.create
2.insert at
3.delete
4.display
5.search
4
	<-1->	<-2->	<-3->
 nodes available are =3
enter your choice

1.create
2.insert at
3.delete
4.display
5.search
2
enter the position to insert2
enter data to be inserted12

enter your choice

1.create
2.insert at
3.delete
4.display
5.search
4
	<-1->	<-12->	<-2->	<-3->
 nodes available are =4
enter your choice

1.create
2.insert at
3.delete
4.display
5.search
3
ente the position to delete2

enter your choice

1.create
2.insert at
3.delete
4.display
5.search
4
	<-1->	<-2->	<-3->
 nodes available are =3
enter your choice

1.create
2.insert at
3.delete
4.display
5.search
5
enter position to search1
element found
*/

 												
 					
 																
 		
 		              
                
                               
                
 
 
