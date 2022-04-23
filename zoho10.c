#include <stdio.h>

int main()
{
    int t,arr[10000],len=2;
    scanf("%d",&t);
    arr[0]=0;
    arr[1]=1; 
    int i,a,b,n;
    int ans;
    while(t>0)
    { 
        scanf("%d %d %d",&a,&b,&n);
        if(n<len)
        {
            for(i=len;i<n;i++)
                arr[i]=arr[i-1]+arr[i-2];
        }
        ans=arr[n-2]*a+arr[n-1]*b;
        printf("%d",ans);
    }
    return 0;
}  