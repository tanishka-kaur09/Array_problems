#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    int suffix=0;
    for(int i=n-1;i>=0;i--)
    {   
        suffix+=a[i];
        cout<<i+1<<"th term's suffix sum: "<<suffix<<endl;
    }
}