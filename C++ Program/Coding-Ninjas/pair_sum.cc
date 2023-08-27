#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> pairSum(vector<int> arr, int target)
{
    vector<vector<int>> result;

    for (unsigned int i = 0; i < arr.size(); i++)
    {
        for (unsigned int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == target)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                result.push_back(temp);
            }
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main()
{
    vector<int> a = {3, 2, 4, 1, 5};
    int target = 6;

    vector<vector<int>> ans = pairSum(a, target);
    for (vector<int> num : ans)
    {
        cout << num[0] << " " << num[1] << endl;
    }
    return 0;
}
