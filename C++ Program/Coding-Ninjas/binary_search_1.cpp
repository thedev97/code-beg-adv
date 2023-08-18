#include <iostream>
using namespace std;
#include <vector>

int search(vector<int> &nums, int target)
{
    int left = 0;
    int right = nums.size();

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            return mid; 
        }
        else if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> A = {1, 3, 7, 9, 11, 12, 45};
    int target_value = 3;

    int result = search(A, target_value);
    if (result != -1)
    {
        cout << result << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }
    return 0;
}