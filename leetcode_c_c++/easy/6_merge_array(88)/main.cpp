#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int sort[m+n];
    int cur;
    for(int i=0,j=0;i<m||j<n;)
    {
        if(i==m)
            cur=nums2[j++];
        else if(j==n)
            cur=nums1[i++];
        else if(nums1[i]<nums2[j])
            cur=nums1[i++];
        else
            cur=nums2[j++];
        sort[i+j-1]=cur;
    }
    for(int i=0;i<m+n;i++)
    {
        nums1[i]=sort[i];
    }
}

int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    vector<int> arr1;
    vector<int> arr2;
    for(int i=0;i<m;i++)
    {
        int x;
        scanf("%d",&x);
        arr1.push_back(x);
    }
    for(int j=0;j<n;j++) {
        int y;
        scanf("%d",&y);
        arr2.push_back(y);
    }
    merge(arr1,m,arr2,n);
    for(int i=0;i<arr1.size();i++)
    {
        printf("%d",arr1[i]);
    }
    return 0;
}
