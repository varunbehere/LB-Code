#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

void Inorder (PNODE Root){                        // Left Head Right
  if (Root != NULL){
    Inorder(Root->lchild);
    printf("%d\n", Root->data);
    Inorder(Root->rchild);
  }
  // printf("\n");
}

void Preorder (PNODE Root){                         // Head Left Right
  if (Root != NULL){
    printf("%d\n", Root->data);
    Preorder(Root->lchild);
    Preorder(Root->rchild);
  }
  // printf("\n");
}

void Postorder (PNODE Root){                      // Left Right Head
  if (Root != NULL){
    Postorder(Root->lchild);
    Postorder(Root->rchild);
    printf("%d\n", Root->data);
  }
  // printf("\n");
}
bool Search (PNODE Root, int No){
  bool flag  = false;
  if (Root == NULL){
    printf("BST is Empty\n");
  }
  while (Root != NULL){
    if (Root -> data == No){
      flag = true;
      break;
    }
    else if (No > Root -> data){
      Root = Root -> rchild;
    }
    else if (No > Root -> data){
      Root = Root -> lchild;
    }
  }
  return flag;
}

int CountLeaf (PNODE Root){
  static int iCnt = 0;
  if (Root != NULL){
    if (Root -> rchild == NULL && Root -> lchild == NULL){
      iCnt ++;
      CountLeaf(Root->rchild);
      CountLeaf(Root->lchild);
    }
  }
  return iCnt;
}

int CountParent (PNODE Root){
  static int iCnt = 0;
  if (Root != NULL){
    if (Root -> rchild != NULL && Root -> lchild != NULL){
      iCnt ++;
      CountParent(Root->rchild);
      CountParent(Root->lchild);
    }
  }
  return iCnt;
}
int CountAll (PNODE Root){
  static int iCnt = 0;
  if (Root != NULL){
      iCnt ++;
      CountAll(Root->rchild);
      CountAll(Root->lchild);
  }
  return iCnt;
}

int main (){
  PNODE Head = NULL;
  bool bRet = false;
  int iRet  = 0;

  Insert(&Head, 21);
  Insert(&Head, 34);
  Insert(&Head, 11);
  Insert(&Head, 98);
  Insert(&Head, 44);
  Insert(&Head, 28);
  Insert(&Head, 11);
  Insert(&Head, 7);
  Insert(&Head, 17);

  printf("inorder ------------\n");
  Inorder (Head);
  printf("preorder ------------\n");
  Preorder(Head);
  printf("postorder ------------\n");
  Postorder(Head);

  bRet = Search(Head,99);
  if (bRet  == true){
    printf("Found\n");
  }
  else{
    printf("Not Found\n");
  }

  iRet = CountLeaf(Head);
  printf("Total Leaf Nodes: %d\n", iRet);

  iRet = CountParent(Head);
  printf("Total Parent Nodes: %d\n", iRet);

  iRet = CountAll(Head);
  printf("Total Nodes: %d\n", iRet);


  return 0;
}
