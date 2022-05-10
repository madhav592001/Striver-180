
struct Job
{
    int id;
    int dead;
    int profit;
}

bool
comp(Job a, Job b){
    return (a.profit > b.profit)}

vector<int> jobSchedule(Job arr[])
{

    sort(arr, arr + n, comp);

    int maxi = arr[0].dead;

    for (int i = 1; i < n; i++)
    {
        maxi = max(maxi, arr[i].dead);
    }

    vector<int> slots(n, -1);
    int jobsdone = 0;
    int profit = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = arr[i].dead; j >= 0; j--)
        {
            if (slots[j] != -1)
            {
                jobsDone++;
                profit += arr[i].profit;
                slots[j] = i;
                break;
            }
        }
    }
}