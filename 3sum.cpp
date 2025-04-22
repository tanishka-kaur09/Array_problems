#include<iostream>
using namespace std;
int main()
{
int a[]={1, 4, 45, 6, 10, 8};
int n=sizeof(a)/sizeof(a[1]);
int target;
cin>>target;

// for(int i=0;i<n-2;i++)
// {
// for(int j=i+1;j<n-1;j++)
// {
//     int x=target-(a[i]+a[j]);
//     int start=j+1,end=n-1;
//     int mid=start+(end-start)/2;
//     while(start<=end)
//     {
//         if(a[mid]==target)
//             return 1;
//         else if(a[mid]>target)
//             end=mid-1;
//         else
//             start=mid+1;
//     }
// }
// }
// return 0;
for(int i=0;i<n-2;i++)
{
    for(int j= i+1;j<n-1;j++)
    {
        if(a[j]>a[j+1])
        swap(a[j],a[j+1]);
    }
}
int start,end,i,x;
for(i=0;i<n-2;i++)
{
    start=i+1;
    end=n-1;
    x=target-a[i];
    while(start<=end)
    {
    if((a[start]+a[end]==x))
    {
        cout<<i<<" "<<start<<" "<<end<<" ";
        break;
    }
    else if((a[start]+a[end]>x))
        end--;
    else
        start++;
    }
    
}

}