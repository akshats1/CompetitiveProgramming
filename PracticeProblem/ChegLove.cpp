#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,i;
cin>>n;
int l[n],g[n];
for(i=0;i<n;i++)
{cin>>l[i]
  }
  for(i=0;i<n;i++)
{cin>>g[i]
  }
int f,b;
for(i=0;i<n;i++)
  {

   if(l[i]<g[i])
{
   f=1;
}
else
    f=0;
}

for(i=n-1;i>=0;i--)
  {

   if(l[i]<g[i])
{
   b=1;
}
else
    b=0;
}
if(f==0&&b==0)
    cout<<"none"<<endl;
else
    if(f==1&&b==1)
    cout<<"both"<<endl;
else
    if(f==1&&b==0)
    cout<<"front"<<endl;
else
    if(f==0&&b==1)
    cout<<"back"<<endl;
}
}
