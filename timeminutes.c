#include<stdio.h>
int main(void) {
int sh,sm,eh,em; 
int r1,r2,res,minutes,seconts;
scanf("%d %d",&sh,&sm);
scanf("%d %d",&eh,&em);
if(sh>eh)
{
eh=eh+12;
}
r1=(sh*60)+sm;
r2=(eh*60)+em;
res=r2-r1;
minutes=res/60;
seconts=res%60;
printf("\n%d%d%d%d",sh,sm,eh,em);
printf("\n%d %d",minutes,seconts);
return 0;
}
