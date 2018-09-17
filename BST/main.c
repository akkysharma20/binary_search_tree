#include"bst.h"
void main()
{
  int choice,key,min,max;
  struct node* root=NULL,*temp;
  while(1)
  {
    printf("Enter your choice\n1.Insert a node, 2.Delete a node, 3.Find a element, 4.Find Min, 5.Find Max, 6.Quit, 7.Clear Screen, 8.Post order traversal, 9.Preorder traversal, 10.Inorder traversal\n");
    __fpurge(stdin);
    scanf("%d",&choice);
    switch(choice)
    {
      case 1:
        printf("\nEnter the element to be inserted\n");
        __fpurge(stdin);
        scanf("%d",&key);
        root=ins_node(root,key);
        break;
      case 2:
        printf("\nEnter the element to be deleted\n");
        __fpurge(stdin);
        scanf("%d",&key);
        root=ndelete(root,key);
        break;
      case 3:
      printf("\nEnter the element to be searched\n");
      __fpurge(stdin);
      scanf("%d",&key);
      temp=nsearch(root,key);
      if(temp!=NULL)
      printf("search test %d\n",temp->data);
      break;
      case 4:
      min=minimum(root);
      if(min!=-999)
        printf("\nThe minimum value in bst is %d",min);
      break;
      case 5:
      max=maximum(root);
      if(max!=-999)
        printf("\nThe maximum value in bst is %d",max);
      break;
      default:
        printf("\n Wrong choice");
        break;
      case 6:
        return;
      case 7:
        system("clear");
        break;
      case 8:
        printf("\nThe expression from postorder traversal is\t");
        postorder(root);
        break;
      case 9:
        printf("\nThe expression from preorder traversal is\t");
        preorder(root);
        break;
      case 10:
        printf("\nThe expression from inorder traversal is\t");
        inorder(root);
        break;

    }
  }
}
