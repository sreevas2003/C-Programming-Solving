#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *left,*right;
}*root=NULL;
typedef struct node Node;
Node* create(int data)
{
	Node* temp=malloc(sizeof(Node));
	temp->info=data;
	temp->left=temp->right=NULL;
	return temp;
}
Node* insert(Node* root,int data)
{
	if(root==NULL)
		return create(data);
	if(data<root->info)
		root->left=insert(root->left,data);
	if(data>root->info)
		root->right=insert(root->right,data);
	return root;
}


Node* minimum(Node* root)
{
	while(root && root->left->left)
		root=root->left;
	return root;
}
Node* maximum(Node* root)
{
	while(root && root->right->right)
		root=root->right;
	return root;
}
void inorder(Node* root)
{
	if(root==NULL)
		return;
	printf("%d ",root->info);
	inorder(root->left);
	inorder(root->right);
}

void main()
{
	int i,n,data;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		root=insert(root,data);
	}
	inorder(root);
	printf("\n");
	Node* temp=minimum(root);
	printf("minimum : %d and parent %d\n",temp->left->info,temp->info);
	temp=maximum(root);
	printf("Maximum : %d and parent %d\n",temp->right->info,temp->info);
}
