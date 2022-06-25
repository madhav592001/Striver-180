
void solve(int idx, vector<int> &arr, vector<int> &ans, int n, int sum)
{
    if (idx == n)
    {
        ans.push_back(sum);
        return;
    }

    solve(idx++, arr, ans, n, sum + arr[idx]);
    solve(idx++, arr, ans, n, sum);
}