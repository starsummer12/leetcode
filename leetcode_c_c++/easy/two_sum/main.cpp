#include "bits/stdc++.h"
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> map;
    for(int i=0;i<nums.size();i++)
    {
        if(map.count(target-nums[i]))
        {
            return {i,map[target-nums[i]]};
        }
        map[nums[i]]=i;
    }
    return {};
}

int main()
{
    int x,target;
    scanf("%d %d",&x,&target);
    vector<int> num;

    for(int i=0;i<x;i++)
    {
        scanf("%d",&i);
        num.push_back(i);
    }
    vector<int> result=twoSum(num,target);
    for(int j=0;j<result.size();j++)
    {
        printf("%d ",result[j]);
    }
    return 0;
}
