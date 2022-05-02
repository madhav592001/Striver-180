//!  Brute Force: Using map

int majorityElement(vector<int> &nums)
{
    map<int, int> mp;

    for (int i = 0; i < nums.size(); i++)
    {
        mp[nums[i]]++;
    }

    map<int, int>::iterator it;

    for (it = mp.begin(); it != mp.end(); it++)
    {
        if (it->second > (nums.size() / 2))
            return it->first;
    }

    return 0;
}

//!   Optimal : Using Moores Voting Algorithm
int majorityElement(vector<int> &nums)
{
    int count = 0;
    int candidate = 0;

    for (int num : nums)
    {
        if (count == 0)
        {
            candidate = num;
        }
        if (num == candidate)
            count += 1;
        else
            count -= 1;
    }

    return candidate;
}