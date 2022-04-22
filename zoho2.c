#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int a[n];
  int b[n];
  int i;
  int j;
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
    b[i] = 1;
  }
  int m = 1;
  for(i=1;i<n;i++)
  {
    for(j=0;j<i;j++)
    {
      if(a[i]>a[j] && b[j]+1>b[i])
        b[i]+=1;
    }
    if(b[i]>m)
      m = b[i];
  }
  printf("%d",b[i]);
  return 0;
}
