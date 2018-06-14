#include<bits/stdc++.h>
using namespace std;
int n,c;
int func(int num,int arr[])
{
    int cows=1,pos=arr[0];
    for(int i=1;i<n;i++)
        if(arr[i]-pos>=num)
{cows++;
if(cows==c)
 {

 return 1;
pos=arr[i];
    }

    }
return 0;
}
int bs(int array[])
{
    int ini=0,l=array[n-1],max=-1;
while(l>ini)
{
int mid=(ini+l)/2;
if(func(mid,array)==1)
{
    if(mid>max)
        max=mid;
    ini=mid+1;
}
   else
        l=mid;
}
//return max;

return max;
}
int main()
{
int t,i;
cin>>t;
while(t--)
{
cin>>n>>c;
int arr[n];
for(i=0;i<n;i++)
 {

 cin>>arr[i];
}
sort(arr,arr+n);
int ans=bs(arr);
cout<<endl<<ans;
}
}
