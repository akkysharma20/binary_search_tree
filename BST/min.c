#include"bst.h"
int minimum(struct node *p)
{
  if(p==NULL)
  {
    printf("\nTree is Empty");
    return -999;
  }
  else if(p->lchild==NULL)
  {
    return(p->data);
  }
  else
    return(minimum(p->lchild));
}
