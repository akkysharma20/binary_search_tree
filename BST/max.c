#include"bst.h"
int maximum(struct node *p)
{
  if(p==NULL)
  {
    printf("\nTree is Empty");
    return -999;
  }
  else if(p->rchild==NULL)
  {
    return(p->data);
  }
  else
    return(maximum(p->rchild));
}
