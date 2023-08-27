#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printArray(vector<int> arr, int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void removeDuplicates(std::vector<int>& nums) {
    if (nums.empty()) {
        return;
    }

    // Sort the array to bring duplicates together
    sort(nums.begin(), nums.end());

    int j = 1; // The new size of the array after removing duplicates

    for (unsigned int i = 1; i < nums.size(); i++) {
        if (nums[i] != nums[j - 1]) {
            nums[j] = nums[i];
            j++;
        }
    }
    // Resize the vector to the new size
    nums.resize(j);
}

vector<int> intersectionArray(vector<int> &num1, int n, vector<int> &num2, int m)
{

    vector<int> result;
    sort(num1.begin(), num1.end());
    sort(num2.begin(), num2.end());
    
    int i = 0;
    int j = 0;

    while (i < n && j < m)
    {
        if (num1[i] == num2[j])
        {
            result.push_back(num1[i]);
            i++;
            j++;
        }
        else if (num1[i] < num2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    removeDuplicates(result);
    return result;
}

int main()
{
    vector<int> a = {1,2,2,1};

    vector<int> b = {2,2};

    vector<int> ans = intersectionArray(a, a.size(), b, b.size());

    printArray(ans, ans.size());
    return 0;
}
