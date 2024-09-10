#include<iostream>
using namespace std;
// void answer(int arr[],int n)
// {
//     int st=0,end=n-1;
//     while(st<end)
//     {
//         if(arr[st]<0)
//           st++;
//         if(arr[end]>0)
//           end--;
//         if(st<end){
//         swap(arr[st],arr[end]);
//         } 
//     }
// }
void answer(int arr[],int n)
{
    int index=0,ptr=0;
    for(index=0;index<n;index++)
    {
        if(arr[index]<0){
        swap(arr[index],arr[ptr]); ptr++;
        }
        
    }
}
void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    answer(arr,n);
    print(arr,n);
    return 0;
}