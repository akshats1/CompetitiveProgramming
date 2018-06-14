#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t,n,k;
    cin>>t;
    while(t--)
    {cin>>n>>k;
    long int arr[n],m[n],t[n],i,j;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i=i+2)
    {m[i]=arr[i];
    }
    for(j=1;j<n-1;j=j+2)
    {
        t[i]=arr[j];
    }
    if(n%2!=0)
        n1=
  sort(m+(n/2)+1,m);
    sort(t,t+(n/2));
    i=0;
    int temp;
    while(k!=0)
    {k--;
     temp=t[i];
     t[i]=m[i];
     m[i]=temp;
     i++;
    }
    int sum=0;
    for(i=0;i<n/2;i++)
    {sum=sum+t[i];}
    int ans=0;
    for(i=0;i<n/2+1;i++)
    {ans=ans+m[i];}
    if(sum>ans)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    }
}
