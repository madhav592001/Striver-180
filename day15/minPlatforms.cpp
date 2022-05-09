
    int findPlatform(int arr[], int dep[], int n)
    {
        sort(arr,arr+n) ; 
        sort(dep,dep+n) ; 
        
        int i = 1 ; int j = 0 ; int curr = 1 ; int result = 1 ; 
        
        while(i<n && j<n)
        {
            if(arr[i] <= dep[j] ){
                curr++ ; 
                i++ ; 
            }
            else if(arr[i] > dep[j]){
                curr-- ; 
                j++ ; 
            }
            result = max(result,curr) ;
        }
        
        return result ; 
    }