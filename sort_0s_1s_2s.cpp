    void sort012(vector<int>& arr) {
        // code here
        int n=arr.size();
        int count_0=0,count_1=0;
        for(int i=0;i<n;i++){
            if(arr[i]==0)
            count_0++;
            else if(arr[i]==1)
            count_1++;
        }
        for(int i=0;i<count_0;i++){
            arr[i]=0;
        }
        int sum=count_0+count_1;
        for(int i=count_0;i<(sum);i++){
            arr[i]=1;
        }
        for(int i=sum;i<n;i++){
            arr[i]=2;
        }
        
    }