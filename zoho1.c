#include<stdio.h>
int main()
{
  //step-1
  int n;
  scanf("%d",&n);
  
  //step-2
  int a[n];
  int i;
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);

  //step-3
  int range = (1<<n) - 1;
  int ind;
  int temp;
  int m;
  int ans = 1;
  int flag;
  for(i=1;i<=range;i++)
  {
    temp = i;
    ind = 0;
    m = 0;
    flag = 0;
    while(temp>0)
    {
      if((temp&1)==1)
      {
        if(a[ind]>m)
          m = a[ind];
        else
        {
          flag = 1;
	  break;
        }
      }
      ind+=1;
      temp = temp>>1;
    }
    if(flag==0)
      ans = //find the maximum of k and ans and assign
    printf("\n");
  }
  printf("%d",ans);
  return 0;
}