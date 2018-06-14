#include<iostream>
using namespace std;

void mul(int *a,int &n,int num)
{

    int carry=0;
    for(int i=0;i<n;i++)
    {
        int pro=a[i]*num+carry;
        a[i]=pro%10;
        carry=pro/10;
    }
    while(carry)
    {
        a[n]=carry%10;
        carry=carry/10;
        n++;
    }

}
void fact(int num)
{
    int *a=new int[1000]{0};
    a[0]=1;
   int  n=1;
    int i;
    for(i=2;i<=num;i++)
    {
        mul(a,n,i);
    }

    for(i=n-1;i>=0;i--)
    cout<<a[i];

}



int main() {


    int num;
    cin>>num;
    fact(num);

	return 0;
}
