#include<bits/stdc++.h>
using namespace std;
int find_pivot(vector<int>& nums)
{
        int n=nums.size();
        int st=0,end=n-1;
       int left=0,right=0;
        while(st<=end)
        {
            
            if(left<right)
            {
                left+=nums[st]; st++;
            }
            else
            {
                right+=nums[end]; end--;
            }
            if(left==right && st==end)
            {
                return st;
            }
        }
        return -1;
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

  cout<<"pivot index is"<<find_pivot(nums);
   return 0;
}