#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node* right;
}*root=NULL;
typedef struct node node;
node* create(int data)
{
	node *temp=malloc(sizeof(node));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
node *insert(node* root,int item)
{
	if(root==NULL)
		return create(item);
	if(root->data<item)
		root->right=insert(root->right,item);
	else if(root->data>item)
		root->left=insert(root->left,item);
	return root;
}
void inorder(node* root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}	
void nochild(node* root)
{
	if(root==NULL)
		return;
	if(root->left==NULL && root->right==NULL)
		printf("%d ",root->data);
	nochild(root->left);
	nochild(root->right);
}
void main()
{
	int arr[7]={50,10,60,20,70,30,80};
	int i;
	for(i=0;i<7;i++)
		root=insert(root,arr[i]);
	inorder(root);
	printf("\n");
	nochild(root);
	printf("\n");
}
