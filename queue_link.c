#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

void enqueue(int);
void diqueue();
void display();
void main()
{
	int ch,i=1,n;
	printf("what do you want:?");
	while(i<4){
	
	printf("\n1.Enquee \n2.dequee \n3.display \n4.Exit:");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:    printf("enter element:");
	           scanf("%d",&n);
		     	enqueue(n);
			    break;
				 
	case 2:     diqueue();
                break;             
    case 3:     display();
                break;
    case 4:     printf("Exit");
                break;
                
    default:    printf("Invalid choise");
                
   };
}
		
	}
	void  enqueue(int val)
	{
		struct node *newnode;
		newnode=(struct node*) malloc(sizeof(struct node));
		newnode->data=val;
		newnode->next=NULL;
		if(front==NULL && rear==NULL){
		front=rear=newnode;
		}
		else{
			rear->next=newnode;
			rear=newnode;
		}
		
	}
	void diqueue(){
			struct node *temp;
			if(rear==NULL){
				printf("queue is empty");
				
			}
			else{
				temp=front;
				front=front->next;
				free(temp);
			}
			
	}
	void display()
	{
		struct node *ptr;
		if(rear==NULL){
			printf("qeue is Empty");
		}
		else{
			ptr=front;
			printf("queue element:");
			while(ptr!=NULL)
			{
				printf("%d",ptr->data);
				ptr=ptr->next;
			}
		}
	}
	
