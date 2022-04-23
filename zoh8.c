/*
1. Take input -> N
2. loop -> i(2,N)
2.1. Find factors of N
2.2 Square check each factors of N
2.3.If any factor is square -> Print Not square free
2.4. else -> print Square free
*/

#include<stdio.h>
#include<math.h>
int square_check(int n)
{
  int k;
  k = (int) sqrt(n);
  if(k*k==n)
    return 0;
  return 1;
}
int square_free_check(int n)
{
  int flag = 0;
  int i = 0;
  for(i=2;i<=n;i++)
  {
    if(n%i==0 && square_check(i))
    {
      flag = 1;
      break;
    }
  }
  if(flag==0)
    return 1;
  return 0;
}
int main()
{
  int n;
  scanf("%d",&n);
  int i;
  int count = 0;
  for(i=2;i<=n;i++)
  {
    if(n%i==0)
      count+=square_free_check(i);
  }
  printf("%d",count);
  return 0;
}