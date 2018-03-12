#include <stdio.h>
#include<math.h>
void main()
{
char s1[100],s2[100],i,cost5=0,cost1=0;
clrscr();
scanf("%[\n]s",s1);
scanf("\n%[\n]s",s2);
int hash1[26]={1};
int hash2[26]={1};
int l1=strlen(s1);
int l2=strlen(s2);
int count=0,min;
for(i=0;s1[i];i++){
hash1[s1[i]-97]++;
}
for(i=0;s2[i];i++){
hash2[s2[i]-97]++;
}
for(i=0;i<26;i++){
count+=abs(hash1[i]-hash2[i]);
}
if(l1!=l2){
if(count==abs(l1-l2)){
cost5=+count*3;
}
}
else
{
cost5=((count/2)*3)+((count/2)*4);
cost1+=(count/2*5);
}
min=(cost5<cost1)?cost5:cost1;
printf("%d",min);
getch();
}
