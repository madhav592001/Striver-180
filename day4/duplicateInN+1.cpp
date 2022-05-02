Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n] inclusive.

There is only one repeated number in nums, return this repeated number.

You must solve the problem without modifying the array nums and uses only constant extra space.

int findDuplicate(vector<int> &nums)
{

    vector<int> idx(nums.size(), 0);

    for (int i = 0; i < nums.size(); i++)
    {
        if (idx[nums[i]] < 1)
            idx[nums[i]]++;
        else
            return nums[i];
    }

    return 0;
}