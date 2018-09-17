#include"bst.h"
void postorder(struct node *p)
{
  if(p==NULL)
    return;
  printf("%d ",p->data);
  postorder(p->lchild);
  postorder(p->rchild);
}
