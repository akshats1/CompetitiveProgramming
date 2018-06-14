#include<bits/stdc++.h>
using namespace std;
int main()
{int t,i,j,n;
cin>>t;
while(t--)
{cin>>n;
long int a[n],b[n*n];
for(i=1;i<=n;i++)
{cin>>a[i];
}
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{b[i*n+j+1]=a[i+1]+a[j+1];
}
long int ans=0;
for(i=1;i<=pow(n,2);i++)
{ans=ans^b[i];
}
cout<<ans<<endl;
}
}
