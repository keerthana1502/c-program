#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  int i;
  int a[n];
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  int l = 0;
  int r = n-1;
  int sum;
  int flag = 0;
  while(r>l)
  {
    if(a[l]>a[r])
    {
      r-=1;
      a[r]+=a[r+1];
    }
    else if(a[r]>a[l])
    {
      l+=1;
      a[l]+=a[l-1];
    }
    else if(a[l]==a[r])
    {
      sum = 0;
      for(i=l+2;i<=r-2;i++)
        sum+=a[i];
      if(sum==a[l])
      {
        printf("%d %d",l+1,r-1);
        flag = 1;
        break;
      }
      else
      {
        r-=1;
        a[r]+=a[r+1];
        l+=1;
        a[l]+=a[l-1];
      }
    }
  }
  if(flag==0)
    printf("No Splitting indexes found");
  return 0;
}
