#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums) {
        vector<int> dp(nums.size());
        int result=INT_MIN;
        dp[0]=nums[0];
        result=dp[0];
        for(int i=1;i<nums.size();i++)
        {
            dp[i]=max(nums[i]+dp[i-1],nums[i]);
            if(dp[i]>result)
                result=dp[i];
        }
        return result;
    }
int main() {
    vector<int>  nums;
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        int n;
        scanf("%d",&n);
        nums.push_back(n);
    }
    int maxsum= maxSubArray(nums);
    printf("%d",maxsum);
    return 0;
}
