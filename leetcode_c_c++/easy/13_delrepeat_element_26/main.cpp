#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if(nums.size()==0)
        return 0;
    int i=0;
    for(int j=1;j<nums.size();j++)
    {
        if(nums[i]!=nums[j])
            nums[++i]=nums[j];
    }
    return i+1;
}

int main() {
    vector<int> nums;
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        int m;
        scanf("%d",&m);
        nums.push_back(m);
    }
    int finall= removeDuplicates(nums);
    printf("%d",finall);
    return 0;
}
