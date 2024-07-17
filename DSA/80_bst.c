#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node * lchild;
  struct node * rchild;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Insert(PPNODE Root, int No){
  PNODE newn = NULL;
  PNODE temp = NULL;
  newn = (PNODE) malloc (sizeof (NODE));

  newn -> data = No;
  newn -> lchild = NULL;
  newn -> rchild = NULL;

  if (*Root == NULL){         // tree is empty
    *Root = newn;
  }
  else{                       // tree contains at least 1 node
    temp = *Root;
    while (1){
      if (temp->data == No){
        printf("Element already present\n");
        free(newn);
        break;
      }
      else if (No > temp -> data){
        if (temp -> rchild == NULL){
          temp->rchild = newn;
          break;
        }
          temp = temp->rchild;
      }
      else if (No < temp -> data){
        if (temp -> lchild == NULL){
          temp->lchild = newn;
          break;
        }
        temp = temp->lchild;
      }
    }
  }
}

void Inorder (PNODE Root){
  if (Root != NULL){
    Inorder(Root->lchild);
    printf("%d\n", Root->data);
    Inorder(Root->rchild);
  }
  printf("\n");
}

void Preorder (PNODE Root){
  if (Root != NULL){
    printf("%d\n", Root->data);
    Preorder(Root->lchild);
    Preorder(Root->rchild);
  }
  printf("\n");
}
void Postorder (PNODE Root){
  if (Root != NULL){
    Postorder(Root->lchild);
    Postorder(Root->rchild);
    printf("%d\n", Root->data);
  }
  printf("\n");
}


int main (){
  PNODE Head = NULL;
  Insert(&Head, 21);
  Insert(&Head, 11);
  Insert(&Head, 51);

  printf("inorder ------------\n");
  Inorder (Head);
  printf("preorder ------------\n");
  Preorder(Head);
  printf("postorder ------------\n");
  Postorder(Head);

  return 0;
}
