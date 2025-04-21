#include<iostream>
using namespace std;
int main()
{
    int a[7]={2,1,1,3,4,5,6};
    
    // int temp[7]={0,0,0,0,0,0,0};
    // for(int i=0;i<7;i++)
    // temp[a[i]-1]++;
    // for(int i=0;i<7;i++)
    // {
    //     if(temp[i]==0)
    //     cout<<"missing: "<<i+1<<endl;
    //     else if(temp[i]>1)
    //     cout<<"repeating: "<<i+1;
    // }

    for(int i=0;i<7;i++)
    a[i]--;
    for(int i=0;i<7;i++)
    {
        a[a[i]%7]+=7;
    }
    for(int i=0;i<7;i++)
    {
        if(a[i]/7==0)
        cout<<"missing: "<<i+1<<endl;
        else if(a[i]/7>=2)
        cout<<"repeating: "<<i+1<<endl;
    }
    
}
