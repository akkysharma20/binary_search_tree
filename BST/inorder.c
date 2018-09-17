#include"bst.h"
void inorder(struct node *p)
{
  if(p==NULL)
    return;
  inorder(p->lchild);
  printf("%d ",p->data);
  inorder(p->rchild);
}
