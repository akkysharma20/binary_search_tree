#include"bst.h"
struct node* ndelete(struct node *p,int key)
{
  struct node *temp,*temp1,*successor;
  if(p==NULL)
  {
    printf("\n Element is not found in the tree");
    return NULL;
  }
  else if(p->data>key)
    p->lchild=ndelete(p->lchild,key);
  else if(p->data<key)
    p->rchild=ndelete(p->rchild,key);
  else
  {
    if((p->lchild)==NULL&&(p->rchild)==NULL)
    {
      free(p);
      return NULL;
    }
    else if((p->lchild)!=NULL&&(p->rchild)!=NULL)
    {
      temp=p->rchild;
      if(temp->lchild==NULL)
      {
        p->data=temp->data;
        p->rchild=temp->rchild;
        free(temp);
        return p;
      }
      else
        while(temp->lchild!=NULL)
        {
          temp1=temp;
          temp=temp->lchild;
        }
      p->data=temp->data;
      temp1->lchild=temp->rchild;
      free(temp);
      return p;

    }
    else
    {
      if((p->lchild)!=NULL)
      {
        temp=p->lchild;
        free(p);
        return temp;
      }
      else
      {
        temp=p->rchild;
        free(p);
        return temp;

      }

    }

  }

return p;
}
