#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,ca,i;
    cin>>t;
    while(t--)
    {
        cin>>n>>ca;
        int arr[n];
        for(i=0;i<n;i++)
            {
                cin>>arr[i];
            }
            sort(arr, arr+n, greater<int>());
            
           for(i=0;i<n;i++)
            {
                ca=ca-arr[i];
            }
            if(ca<0)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
    }
}
