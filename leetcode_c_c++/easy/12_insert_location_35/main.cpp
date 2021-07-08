#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
    int m=0,n=nums.size()-1;
    while(m<=n)
    {
        int mid=(m+n)>>1;
        if(nums[mid]==target)
            return mid;
        else if(target<nums[mid])
        {
            n=mid-1;
        }
        else
            m=mid+1;
    }
    return m;
}
int main() {
    vector<int> intarr;
    int x,target;
    scanf("%d %d",&x,&target);
    for(int i=0;i<x;i++)
    {
        int n;
        scanf("%d",&n);
        intarr.push_back(n);
    }
    int result= searchInsert(intarr,target);
    printf("%d",result);
    return 0;
}
