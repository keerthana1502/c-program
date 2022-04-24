#include <stdio.h>
int prime(int n)
{
int s=0,i;
    for (i = 2; i <= n / 2; ++i) {
        if (n % i == 0) {
            s = 1;      
        }
    }
    return s;
}

int main() 
{
    int n, i, rev=0;
    scanf("%d", &n);
    int ans=prime(n);
    while(n!=0)
    {
    rev=rev*10+(n%10);
    n/=10;
    }
    int ans1=prime(rev);
        if (ans==0 && ans1==0)
            printf("Twisted Prime Number");
        else
            printf("Not Twisted Prime Number");
    return 0;
}
