#include<bits/stdc++.h>
using namespace std;
string commonPrefixUtil(string str1,string str2)
{
string result;
int n1=str1.length(),n2=str2.length();
for(int s=0,j=0;s<=n1-1&&j<=n2-1;s++,j++)
{
if (str1[s] != str2[j])
break;
result.push_back(str1[s]);
}
return(result);
}
string commonPrefix(string arr[],int n)
{
string prefix =  arr[0];
for (int s=1; s<=n-1; s++)
prefix = commonPrefixUtil(prefix, arr[s]);
return (prefix);
}
int main()
{
string arr[]={"ashok","ashaa","asiha","asitha"};
int n=sizeof(arr)/sizeof(arr[0]);
string ans=commonPrefix(arr,n);
if(ans.length())
printf ("The longest common prefix is - %s",ans.c_str());
else
printf("There is no common prefix");
return (0);
}
