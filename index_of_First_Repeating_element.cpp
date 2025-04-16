#include <iostream>
using namespace std;

int main()
{
    int a[]={1, 5, 3, 4, 3, 5, 6};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]==a[i])
            {
                cout<<i+1;
                return 0;
            }    
        }
    }
    return -1;
}