
//!  Greedy Method

static bool compareEnd(pair<int, int> &a, pair<int, int> &b)
{
    return (a.second < b.second);
}

int maxMeetings(int start[], int end[], int n)
{
    pair<int, int> arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i].first = start[i];
        arr[i].second = end[i];
    }

    sort(arr, arr + n, &compareEnd); // sort according to end time

    int currEnd = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (currEnd < arr[i].first)
        {
            currEnd = arr[i].second;
            ans++;
        }
    }

    return ans;
}