#include<stdio.h>
int main()
{
 int n,i;
 unsigned long long factorial = 1;
 scanf("%d",&n);
 printf("%d\n",n);
 for(i=1;i<=n;++i)
 {
 factorial *=i; 
 }
 printf("%d",factorial);
return 0;
}
