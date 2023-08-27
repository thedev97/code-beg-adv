#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*vector<vector<int>> findTriplets(vector<int> arr, int target)
{
    vector<vector<int>> result;
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        for (unsigned int j = i + 1; j < arr.size(); j++)
        {
            for (unsigned int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == target)
                {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    result.push_back(temp);
                }
            }
            cout << endl;
        }
    }
    sort(result.begin(), result.end());
    return result;
}*/

vector<vector<int>> findTriplets(vector<int> arr, int size, int target)
{
    vector<vector<int>> result;

    // sort the given array
    sort(arr.begin(), arr.end());

    // loop iterates through the array elements from index 0 to n - 3
    for (int i = 0; i < size - 2; i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            continue; // skip the duplicate elemnet
        }

        int left = i + 1;
        int right = size - 1;

        int num1 = arr[i];

        while (left < right)
        {
            int num2 = arr[left];
            int num3 = arr[right];

            int sum = num1 + num2 + num3;

            if (sum == target)
            {
                result.push_back({num1, num2, num3});

                while (left < right && arr[left] == arr[left + 1])
                {
                    left++;
                }

                while (left < right && arr[right] == arr[right - 1])
                {
                    right--;
                }

                left++;
                right--;
            }
            else if (sum < target)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }

    return result;
}

int main()
{
    vector<int> a = {1, 2, 3, 4, 5};
    int target = 12;
    vector<vector<int>> ans = findTriplets(a, a.size(), target);

    for (vector<int> num : ans)
    {
        cout << num[0] << " " << num[1] << " " << num[2] << " ";
    }
    cout << endl;
    return 0;
}
