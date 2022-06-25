
// todo -> Brute force
change in the combination sum
1. You can move you idx on pick
2. you have to take a set for unique elements


void findCombination(int idx, vector<int> &arr, int target, set<vector<int>> &ans; vector<int> & sub) //? set in place of vector
{
    if (idx == arr.size())
    {
        if (target == 0)
            ans.push_back(sub);
    }

    //? Pick -> we have not update idx because we can not take an element multiple times
    if (arr[idx] <= target)
    {
        sub.push_back(arr[idx]);
        findCombination(idx + 1, arr, target - arr[idx], ans, sub); //? idx+1
        sub.pop_back();
    }

    findCombination(idx++, arr, target, ans, sub); //? Not pick
}
