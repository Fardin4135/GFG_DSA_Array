#include<bits/stdc++.h>
using namespace std;
//Time O(n*n)
// bool find_pair(vector<int>& nums,int target)
// {
//         for(int i=0;i<nums.size();i++)
//         {
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i]+nums[j]==target)
//                 return true;
//             }
//         }
//         return false;
// }

// Through Binary Search O(log n) * O(n log n)=O(n log n)
bool find_pair(vector<int>& nums,int target)
{
    sort(nums.begin(),nums.end());
    int st=0,end=nums.size(),mid=st+(end-st)/2;
    while(st<end)
    {
        int ans=nums[st]+nums[mid];
        if(ans==target)
        return true;
        if(ans>nums[mid])
        st=mid+1;
        else
        end=mid-1;
        mid=st+(end-st)/2;
    }
    return false;
}
int main()
{
    int n; cout<<"Enter the size of vector:"<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter the Elements in vector:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    int target;
    cout<<"Enter the target value:"<<endl;  cin>>target;
   bool ans=find_pair(nums,target);
   if(ans)
   cout<<"key pair found:";
   else
   cout<<"key pair dosnot found:";
   return 0;
}