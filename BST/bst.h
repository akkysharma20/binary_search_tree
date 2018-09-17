#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
struct node
{
  int data;
  struct node *lchild;
  struct node *rchild;
};
void preorder(struct node*);
void postorder(struct node*);
void inorder(struct node*);
struct node* ins_node(struct node*,int);
struct node* nsearch(struct node*, int);
struct node* ndelete(struct node*,int);
int maximum(struct node*);
int minimum(struct node*);
