#include <iostream>
using namespace std;

int missing_num(int a[],int n,int last_num)
{
    int expected_sum=(last_num*(last_num+1))/2;
    int actual_sum=0;
    for(int i=0;i<n;i++)
        actual_sum=actual_sum+a[i];
    int missing = expected_sum - actual_sum;
    return missing;
}

int main()
{
    int a[6]={1,2,3,5,6};
    int n=sizeof(a)/sizeof(a[0]);
    int last_num=6;
    int missing= missing_num(a,n,last_num);
    cout<<missing;
}