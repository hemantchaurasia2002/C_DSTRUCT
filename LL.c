//
#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node* next;
};
struct Node* head; //global variable whcih can be accessed anywhere

//Insert function, which insert element in LL
void Insert(int x)
{
  struct Node* temp = (Node*)malloc(sizeof(struct Node));
  temp->data = x;
  temp->next = NULL;
  if(head !=NULL)
    temp->next = head;
    head = temp;
}

//Print fucntion, which print LL
void Print()
{
  struct Node* temp = head;
  printf("List is: ");
  while(temp != NULL)
  {
    printf("%d", temp->data);
    temp = temp->next;
  }
  printf("\n");
}



int main()
{
  head = NULL; //EMPTY LINKED LIST
  int n,i,x;
  printf("How many numbers?\n");
  scanf("%d", &n);
  for(i=0;i<n;i++)
  {
    printf("Enter the number \n");
    scanf("%d", &x);
    Insert(x);
    Print();
  }
}