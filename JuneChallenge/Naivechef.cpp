#include<bits/stdc++.h>
#include <iomanip>
using namespace std;
int main()
{
    int t,n,i,a,b;
    cin>>t;
    while(t--)
    {cin>>n;
    double arr[n],c1=0,c2=0;
    cin>>a>>b;
    for(i=1;i<=n;i++)
    {cin>>arr[i];
    }
    for(i=1;i<=n;i++)
    {
        if(arr[i]==a)
            c1++;
        if(arr[i]==b)
            c2++;
    }
  //  cout<<c1<<" "<<c2;

    double ans;
    ans=((c1)*(c2))/(n*n);
    cout<<fixed<<setprecision(10)<<ans<<endl;

    }
}
