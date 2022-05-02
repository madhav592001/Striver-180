//!  Brute Force -> sort and traversal
int longestConsecutive(vector<int> &nums)
{

    if (nums.size() == 0)
        return 0;

    sort(nums.begin(), nums.end());

    int curr = 1;
    int prev = nums[0];
    int ans = 1;

    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i] == prev + 1)
            curr++;
        else if (nums[i] != prev)
            curr = 1;
        prev = nums[i];
        ans = max(ans, curr);
    }

    return ans;
}

//!  Optimaized -> Using Hash set
Approach: We will first push all are elements in the HashSet. Then we will run a for loop and check for any number(x) if it is the starting number of the consecutive sequence by checking if the HashSet contains (x-1) or not. If ‘x’ is the starting number of the consecutive sequence we will keep searching for the numbers y = x+1, x+2, x+3, ….. And stop at the first ‘y’ which is not present in the HashSet. Using this we can calculate the length of the longest consecutive subsequence. 

int longestConsecutive(vector < int > & nums) {
  set < int > hashSet;
  for (int num: nums) {
    hashSet.insert(num);
  }

  int longestStreak = 0;

  for (int num: nums) {
    if (!hashSet.count(num - 1)) {
      int currentNum = num;
      int currentStreak = 1;

      while (hashSet.count(currentNum + 1)) {
        currentNum += 1;
        currentStreak += 1;
      }

      longestStreak = max(longestStreak, currentStreak);
    }
  }

  return longestStreak;
}