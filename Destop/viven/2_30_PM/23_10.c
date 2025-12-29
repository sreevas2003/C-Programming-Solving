#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *link;
}*head=NULL,*temp,*p;

typedef struct node Node;

Node* addbegin(Node* head,int data);
Node* create(Node* head);
Node *addend(Node* head,int data);
void display(Node* head);
void middle(Node* head,int n);
Node* reverse(Node* head);
void main()
{
	head=create(head);
	display(head);
	head=reverse(head);
	display(head);
}
Node* reverse(Node* head)
{
	Node *prev,*next;
	prev=NULL;
	temp=head;
	while(temp!=NULL)
	{
		next=temp->link;
		temp->link=prev;
		prev=temp;
		temp=next;
	}
	head=prev;
	return head;
}

void display(Node* head)
{
	printf("Display\n");
	temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->info);
		if(temp->link!=NULL)
			printf("->");
		temp=temp->link;
	}
	printf("\n");
}
Node* create(Node* head)
{
	int n,data,i;
	printf("Enter number of Nodes");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("linked list is empty\n");
		return head; 
	}
	printf("enter data to be inserted ");
	scanf("%d",&data);
	head=addbegin(head,data);
	for(i=2;i<=n;i++)
	{
		printf("enter data to be inserted ");
		scanf("%d",&data);
		head=addend(head,data);
	}
	middle(head,n);
	return head;
}
void middle(Node* head,int n)
{
	int i;
	temp=head;
	for(i=1;i<=n/2;i++)
		temp=temp->link;
	printf("middle element is %d\n",temp->info);
}
Node* addbegin(Node* head,int data)
{
	temp=(Node*)malloc(sizeof(Node));
	temp->info=data;
	temp->link=head;
	head=temp;
	return head;
}
Node *addend(Node* head,int data)
{
	temp=head;
	p=(Node*)malloc(sizeof(Node));
	p->info=data;
	while(temp->link!=NULL)
		temp=temp->link;
	temp->link=p;
	return head;
}
