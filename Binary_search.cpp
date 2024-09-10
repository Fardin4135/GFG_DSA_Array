    int binarysearch(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        int st=0,end=n-1;
        while(st<=end){
            int mid=(st+end)/2;
            if(arr[mid]==k){
                return mid;
            }
            else if(arr[mid]<k){
                st=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return -1;
    }
    