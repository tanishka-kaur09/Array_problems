#include<iostream>
using namespace std;

int main()
{
    int a[]={1, 1, 2, 2, 2, 2, 3};
    int n=sizeof(a)/sizeof(a[0]);
    int x;
    int b=0;
    cout<<"enter target: ";
    cin>>x;
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            b++;
        }
    }
    cout<<b;
}
