//string reversal using stack
#include <stdio.h>

void Reverse(char *c, int n)
{
  stack<char> S;
  //loop for push
  for(int i=0; i<n; i++){
    S.push(C[i]);
  }
  //loop for pop
  for(int i=0; i<n; i++){
    C[i]=S.top();
    S.pop();
  }
}

int main()
{
  char C[51];
  printf("Enter a string");
  gets(C);
  Reverse(C,strlen(C));
  printf("Output = %s,C");

}
