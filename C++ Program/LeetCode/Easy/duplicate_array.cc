#include <iostream>
#include <vector>
#include <map>
using namespace std;

vector<int> findDuplicateArray(vector<int> &arr)
{
    vector<int> result = {};
    map<int, int> countMap = {};

    for (int num : arr)
    {
        countMap[num] = (countMap[num] ? countMap[num] : 0) +1;
        if (countMap[num] == 2)
            result.push_back(num);
    }

    return result;
}

int main()
{
    vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> ans = findDuplicateArray(arr);
    for(int duplicate : ans){
        cout<< duplicate<< " ";
    }
    cout<<endl;
    return 0;
}
