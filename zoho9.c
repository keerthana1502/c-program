#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int i = 2;
  int flag = 0;
  while(n>1)
  {
    if(n%i==0)
    {
      n/=i;
      if(n%i==0)
      {
        flag = 1;
        break;
      }
    }
    i+=1;
  }
  return 0;
}
