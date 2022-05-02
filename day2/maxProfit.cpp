//!     Brute Force

Use a for loop of ‘i’ from 0 to n.
Use another for loop from ‘i+1’ to n.
If arr[j] > arr[i] , take the difference and compare  and store it in the maxPro variable.
Return maxPro.

int maxProfit(vector<int>& arr)
{

    int n = arr.size();
    int maxPro = INT_MIN;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                int profit = arr[j] - arr[i];
                maxPro = max(maxPro, profit);
            }
        }
    }

    if (maxPro == INT_MIN)
        return 0;

    return maxPro;
}

//!     Optimal solution
Create a variable maxPro and mark it as 0.
Create a variable minPrice and mark it as max_value.
Run a for loop from 0 to n.
Update the minPrice at if it greater than current element of the array
Take the difference of the minPrice with the current element of the array and compare and maintain it in maxPro.
Return the maxPro.

int maxProfit(vector<int> &arr)
{
    int maxPro = 0;
    int minPrice = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        minPrice = min(minPrice, arr[i]);
        maxPro = max(maxPro, arr[i] - minPrice);
    }
    return maxPro;

}