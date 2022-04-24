#include<stdio.h>
#include<string.h>
int main() 
{ 
  char n[1000];
  int i,ans;
  scanf("%s",n);
  for(i=0;i<strlen(n);i=i+2)
  {
    ans=n[i+1]-'0';
    while(ans--)
    printf("%c",n[i]);
  }
}

