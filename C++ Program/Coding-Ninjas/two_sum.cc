#include<iostream>
#include<vector>
#include<map>
using namespace std;

vector<List> twoSum(vector<int> num, int target){
    map<int,int> countMap = {};
    vector<int> ans = {};

    for(int i = 0; i<num.size(); i++){
        int complement = target - num[i];

        if(countMap.count(complement)){
            ans.push_back(countMap[complement]);
            ans.push_back(i);
            return ans;
        }
        countMap[num[i]] = i;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
