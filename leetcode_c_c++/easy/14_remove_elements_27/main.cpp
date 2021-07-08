#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int i=0;
    for(int j=0;j<nums.size();j++)
    {
        if(nums[j]!=val)
            nums[i++]=nums[j];
    }
    return i;
}

int main() {
    vector<int> num;
    int x,vl;
    scanf("%d %d",&x,&vl);
    for(int i=0;i<x;i++)
    {
        int n;
        scanf("%d",&n);
        num.push_back(n);
    }
    int result= removeElement(num,vl);
    printf("%d",result);
    return 0;
}
