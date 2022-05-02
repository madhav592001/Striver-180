-> We will have the following variables in the beginning :

    msf – max so far, meh – max end here, start – to get the starting index of ans’s subarray, end – to get the ending index of ans’s subarray.

-> Traverse the array starting with adding the ith element with max_end_here(meh) , now we will check that adding the element gives greater value than max_so_far(msf) , if yes then we will update our meh and also update the starting and ending index .

//? for getting subarray
int maxSubArray(vector < int > & nums, vector < int > & subarray) {
  int msf = nums[0], meh = 0;
  int s = 0;
  for (int i = 0; i < nums.size(); i++) {
    meh += nums[i];
    if (meh > msf) {
      subarray.clear();
      msf = meh;
      subarray.push_back(s);
      subarray.push_back(i);
    }
    if (meh < 0) {
      meh = 0;
      s = i + 1;
    }
  }
  return msf;
}

//? for getting maximum sum
int maxSubArray(vector<int> &nums)
{

    int maxi = INT_MIN;
    int n = nums.size();
    if (n == 0)
        return 0;
    if (n == 1)
        return nums[0];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
        if(maxi > sum){
          maxi = sum ; 
        }
        if (sum < 0)
            sum = 0;
    }
    return maxi;
}