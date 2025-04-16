#include<iostream>
using namespace std;
int main()
{
    int a[]={4, 2, 1, 10, 6};
    int n=sizeof(a)/sizeof(a[0]);
    int i,num1,num2;
    cout<<"enter two numbers: ";
    cin>>num1>>num2;
    int diff=0;
    for(i=0;i<n;i++)
        if(a[i]==num1)
            break;
    for(int j=i+1;j<n;j++)
    {
        if(a[j]==num2)
            break;
        diff++;
    }
    cout<<diff;
} 