#include"bst.h"
struct node* ins_node(struct node* p,int key)
{
    if(p==NULL)
    {
      struct node *temp= (struct node*)malloc(sizeof(struct node));
      temp->data=key;
      temp->rchild=temp->lchild=NULL;
      return temp;
    }
    else if((p->data)>key)
      p->lchild=ins_node(p->lchild,key);
    else if((p->data)<key)
      p->rchild=ins_node(p->rchild,key);
    else
      printf("\nThe element is already in tree");
    return p;

}
