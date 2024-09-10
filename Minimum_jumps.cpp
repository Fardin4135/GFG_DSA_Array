int max(int a, int b)
{
    return (a > b) ? a : b;
}
 

int minJumps(vector<int> arr)
{
 int n=arr.size();
    
    if (n <= 1)
        return 0;
       
     
      if (arr[0] >= n-1)
          return 1;
 
    if (arr[0] == 0)
        return -1;
 
    int maxReach = arr[0];
 
    int shift = arr[0];
 
    int jum = 1;
 
    int i = 1;
    for (i = 1; i < n; i++) {
        if (i == n - 1)
            return jum;
       
          if (arr[i] >= (n-1) - i)
              return jum + 1;
 
        maxReach = max(maxReach, i + arr[i]);
 
        shift--;
 
        if (shift == 0) {
    
            jum++;

            if (i >= maxReach)
                return -1;

            shift = maxReach - i;
        }
    }
 
    return -1;
}