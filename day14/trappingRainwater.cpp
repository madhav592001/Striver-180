
//!  O(N) and space -> O(2n)

int trap(vector<int> &height)
{

    vector<int> pre(height.size());  //? for max prefix
    vector<int> suff(height.size()); //? for max suffix

    pre[0] = height[0];
    for (int i = 1; i < height.size(); i++)
    {
        pre[i] = max(pre[i - 1], height[i]);
    }

    suff[height.size() - 1] = height[height.size() - 1];
    for (int i = height.size() - 2; i >= 0; i--)
    {
        suff[i] = max(suff[i + 1], height[i]);
    }

    int ans = 0;

    for (int i = 0; i < height.size(); i++)
    {
        ans += (min(pre[i], suff[i])) - height[i];
    }

    return ans;
}