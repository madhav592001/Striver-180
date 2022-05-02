Initialize the 3 pointers such that low and mid will point to 0th index and high pointer will point to last index
    int low = arr[0]

    int mid = arr[0]

    int high = arr[n – 1]

Now there will 3 different operations / steps based on the value of arr[mid] and will be repeated until mid <= high.

    arr[mid] == 0:
    swap(arr[low], arr[mid])
    low++, mid++

    arr[mid] == 1:
    mid++

    arr[mid] == 2:
    swap(arr[mid], arr[high])
    high–-;

void sortColors(vector<int> &nums)
{
    int lo = 0;
    int mid = 0;
    int hi = nums.size() - 1;
        while (mid <= hi) { 
            switch (nums[mid]) { 

            // If the element is 0 
            case 0: 
                swap(nums[lo++], nums[mid++]); 
                break; 

            // If the element is 1 . 
            case 1: 
                mid++; 
                break; 

            // If the element is 2 
            case 2: 
                swap(nums[mid++], nums[hi--]); 
                break; 
            }
        }
    }

