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
	else if(data>root->info)
		root->right=insert(root->right,data);
	return root;
}

void preorder(Node* root)
{
	if(root==NULL)
		return;
	printf("%d ",root->info);
	preorder(root->left);
	preorder(root->right);
}
void swap(Node *root)
{
	if(root==NULL)
		return;
	Node* temp=root->left;
	root->left=root->right;
	root->right=temp;
	swap(root->left);
	swap(root->right);
}


void main()
{
	int n;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	int i,data;
	printf("Enter elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		root=insert(root,data);
	}
	printf("before Swaping : \n");
	preorder(root);
	printf("\n");
	printf("After Swapping\n");
	swap(root);
	preorder(root);
	printf("\n");

}

