

void findCombination(int idx, vector<int> &arr, int target, vector<vector<int>> &ans; vector<int> & sub)
{
    if (idx == arr.size())
    {
        if (target == 0)
            ans.push_back(sub);
    }

    //? Pick -> we have not update idx because we can take an element multiple times
    if (arr[idx] <= target)
    {
        sub.push_back(arr[idx]);
        findCombination(idx, arr, target - arr[idx], ans, sub);
        sub.pop_back();
    }

    findCombination(idx++, arr, target, ans, sub); //? Not pick
}

vector<vector<int>> combinaionSum(vector<int> candidates, int target)
{

    vector<vector<int>> ans;
    vector<int> sub;

    findCombination(0, candidates, target, ans, sub);

    return ans;
}