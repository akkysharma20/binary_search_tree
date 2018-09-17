#include"bst.h"
void preorder(struct node *p)
{
  if(p==NULL)
    return;
  printf("%d ",p->data);
  preorder(p->lchild);
  preorder(p->rchild);
}
