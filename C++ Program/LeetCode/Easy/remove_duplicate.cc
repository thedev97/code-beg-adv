#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

/*int removeDuplicateArray(vector<int> &arr)
{
    int newSize = 1;
    for (unsigned int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != arr[newSize - 1])
        {
            arr[newSize - 1] = arr[i];
            newSize++;
        }
    }
    arr.resize(newSize);
    return newSize;
}*/

// Best solution ~1
/*vector<int> removeDuplicateArray(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    arr.erase(unique(arr.begin(), arr.end()), arr.end());
    return arr;
}*/

// Best solution ~2
/*vector<int> removeDuplicateArray(vector<int> arr)
{
    sort(arr.begin(), arr.end());

    vector<int> ans;

    for (unsigned int i = 0; i < arr.size(); i++)
    {
        if(i==0 || arr[i] != arr[i-1]){
            ans.push_back(arr[i]);
        }
    }

    return ans;

}*/

// Best optimized solution
vector<int> removeDuplicateArray(vector<int> arr)
{
    vector<int> ans = {};
    for(int num : arr){
        bool isDuplicate = false;
        for(int uniqueNum : ans){
            if(num==uniqueNum){
                isDuplicate = true;
                break;
            }
        }
        if(!isDuplicate){
            ans.push_back(num);
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 2, 3, 4};
    vector<int> ans = removeDuplicateArray(arr);
    for (int num : ans)
    {
        cout << num << " ";
    }
    return 0;
}
// 41 1 37 23 38 15 24 40 36 34 20 16 8 46 49