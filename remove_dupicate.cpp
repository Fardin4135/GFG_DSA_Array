#include<iostream>
#include<vector>
using namespace std;

void remove_dup(vector<int>& nums)
{
    int n=nums.size(),temp=0;
    vector<int> ans;
     temp=nums[0];
    for(int i=0;i<n;i++)
    {
        if(temp==nums[i])
        {
            temp=nums[i];
        }
        else{
            ans.push_back(nums[i-1]); temp=nums[i];
        }
    }
    ans.push_back(temp);
    cout<<"Duplicates removed :"<<endl;
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
int main()
{
    int n; cout<<"Enter the size of vector :"<<endl;
    cin>>n;
    vector<int> nums(n);  cout<<"Enter the elements in vecor :"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>nums[i];
    }
    remove_dup(nums);
    return 0;
}