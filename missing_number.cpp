#include<bits/stdc++.h>
using namespace std;
int missing_number(vector<int>& nums,int size)
{
        int n=nums.size(),sum=0;
        int ans=(size*(size+1))/2;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        return (ans-sum);
}

int main()
{
    int n; cout<<"Enter the size of vector:"<<endl;
    cin>>n;  int size=n;
    vector<int> nums(n-1);
    cout<<"Enter the Elements in vector:"<<endl;
    for(int i=0;i<nums.size();i++)
    {
        cin>>nums[i];
    }
  cout<<"The missing number is :"<<missing_number(nums,size);
   return 0;
}