#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int prefix=0;
    for(int i=0;i<n;i++)
    {   
        prefix+=a[i];
        cout<<i+1<<"th term's prefix sum: "<<prefix<<endl;
    }
}