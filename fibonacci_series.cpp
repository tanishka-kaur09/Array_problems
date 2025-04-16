#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int n;
    cout<<"enter the number";
    cin>>n;
    a[0]=0;
    a[1]=1;
    int i;
    for(i=2;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }
    cout<<a[i-1];
}