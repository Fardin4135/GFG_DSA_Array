#include<iostream>
using namespace std;
void print(int arr[][4],int i,int j)
{
      for( i=0;i<3;i++)
        {
            for(j=0;j<4;j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
}
int main()
{
    // int arr[3][4]={
    //               {1,2,3,4},
    //               {11,12,13,4},
    //               {10,20,30,4}
    //               };
    //   print(arr,3,4);
    int arr[3][4];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<"Enter the number in "<<i<<" row and "<<j<<"coloumn";
            cin>>arr[i][j];
        }
    }
    print(arr,3,4);
    
    return 0;
}