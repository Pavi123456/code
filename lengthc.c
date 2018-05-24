#include<stdio.h>

int main()
{
char s[10];
    int count=0;
    scanf("%c",s);
    for(int i=0;i<10;i++)
    {
   for(i = 0; s[i] != '\0'; ++i);

    printf("%d", i);
    return 0;
}
}
