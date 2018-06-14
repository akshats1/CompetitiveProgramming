#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n],b[n];
    for(i=0;i<n;i++)
    cin>>arr[i];
    int p=0;
    for(j=0;j<n/2;j++)
    {b[j]=arr[j]+arr[n-j-1];
    p++;
    }
   for(i=0;i<p;i++)
        cout<<b[i]<<" ";
}
