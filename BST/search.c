#include"bst.h"
struct node* nsearch(struct node* p, int key)
{
  if(p==NULL)
  {
    printf("\nElement is not found");
    return NULL;
  }
  else if((p->data)>key)
    return(nsearch(p->lchild,key));
  else if((p->data)<key)
    return(nsearch(p->rchild,key));
  else
  {
    printf("Element found\n");
    return p;
  }

}
