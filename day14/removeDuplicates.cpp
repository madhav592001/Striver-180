
    int removeDuplicates(vector<int>& nums) {
        
        if(nums.size() == 0 || nums.size() == 1) return nums.size() ; 
        
        int ans = 1 ; 
        int ele = nums[0] ; 
        int j = 1 ; 
        
        for(int i = 1 ; i < nums.size() ; i++)
        {
            if(ele == nums[i]) continue ;
            else{
                ele = nums[i] ; 
                nums[j] = nums[i] ; 
                j++ ; 
                ans++ ; 
            }
        }
        
        return ans; 
        
    }