#include<bits/stdc++.h>
using namespace std;
  int firstRepeated(int arr[], int n) {
        // code here
        int ans=-1;
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
            int st=i+1,end=n,mid=(st+end)/2;
            while(st<end)
            {
                if(arr[i]==arr[mid])
                {
                    ans=i+1; break;
                }
               if(arr[i]<arr[mid])
               {
                   end=mid-1;
               }
               else
                   st=mid+1;
            }
            if(ans>-1)
            break;
            else
            ans=-1;
        }
        return ans;
    }
int main()
{
    int n; cout<<"Enter the size of array:"<<endl;
    cin>>n;
    int arr[n]; cout<<"Enter the elements in array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<firstRepeated(arr,n);
    return 0;
}