#include<stdio.h>
int main()
{
int n,revInt=0,rem,oriInt;
printf("Enter integer:");
scanf("%d",&n);
oriInt=n;
while(n!=0)
{
rem=n%10;
revInt=revInt*10+rem;
n/=10;
}
if(oriInt==revInt)
printf("%d is palindrome",oriInt);
else
printf("%d is not a palindrome",oriInt);
return 0;
}
