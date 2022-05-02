
//!   Brute Force -> Using Nested Loop

//!   Better Solution -> Using Two Pointer Approach
vector<int> twoSum(vector<int> &nums, int target)
{

    vector<int> res, store;
    store = nums;

    sort(store.begin(), store.end());

    int left = 0, right = nums.size() - 1;
    int n1, n2;

    while (left < right)
    {
        if (store[left] + store[right] == target)
        {

            n1 = store[left];
            n2 = store[right];

            break;
        }
        else if (store[left] + store[right] > target)
            right--;
        else
            left++;
    }

    for (int i = 0; i < nums.size(); ++i)
    {

        if (nums[i] == n1)
            res.emplace_back(i);
        else if (nums[i] == n2)
            res.emplace_back(i);
    }

    return res;
}

//!   Optimized Solution -> Using Map
vector<int> twoSum(vector<int> &nums, int target)
{

    unordered_map<int, int> mp;
    vector<int> ans;

    for (int i = 0; i < nums.size(); ++i)
    {
        if (mp.find(target - nums[i]) != mp.end())
        {
            ans.emplace_back(mp[target - nums[i]]);
            ans.emplace_back(i);
            break;
        }
        else
        {
            mp[nums[i]] = i;
        }
    }

    return ans;
}