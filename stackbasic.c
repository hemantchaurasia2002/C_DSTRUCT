#include <stdio.h>
#define MAX_SIZE 101
int A[MAX_SIZE];
int top = -1;
void Push(int x)
{
  if (top == MAX_SIZE)
  {
    printf("ERROR: STACK OVERFLOW");
  }
  {
    top++;
    A[top] = x;
  }
}
void Pop(){
  if(top == -1){
    printf("ERROR : NO ELEMENT TO POP");
  }
  top--;
}

void Print()
{
  int i;
  printf("STACK : ");
  for(i=0; i<=top; i++)
    printf("%d ", A[i]);
  printf("\n");
}
int Top(){
  return A[top];
}

int main()
{
  Push(2);Print();
  Push(5);Print();
  Push(10);Print();
  Pop();Print();
  Push(12);Print();
}..