 bool check(vector<int>& arr1, vector<int>& arr2) {
        // code here
        int arr1_size=arr1.size();
        int arr2_size=arr2.size();
        if(arr1_size!=arr2_size){
            return false;
        }
        sort(arr1.begin(),arr1.end());
         sort(arr2.begin(),arr2.end());
         bool ans;
         for(int i=0;i<arr1_size;i++){
             if(arr1[i]==arr2[i]){
                 ans=true;
             }
             else{
                 ans=false;
                 break;
             }
         }
         return ans;
    }