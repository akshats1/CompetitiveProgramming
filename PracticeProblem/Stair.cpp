
#include<iostream>
using namespace std;
int stair(int n)
{long long ans=0;
    if(n==0)
{return 1;}
if(n<0)
{return 0;}
else
ans=stair(n-1)+stair(n-3);
return ans;
}
int main()
{
long long int n,n1;
cin>>n;
n1=stair(n);
cout<<n1;
}
