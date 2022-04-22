#include<stdio.h>
int convert(int n)
{
  int ans = 0;
  int dig = 1;
  while(n)
  {
    if(n&1)
      ans = ans + dig*9;
    n = n>>1;
   dig = dig*10;
  }
  return ans;
}
int main()
{
  int n;
  scanf("%d",&n);
  int k = 1;
  while(convert(k)%n!=0)
    k+=1;
  printf("%d",convert(k));  
  return 0;
}
