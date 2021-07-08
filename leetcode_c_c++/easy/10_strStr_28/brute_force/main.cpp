#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {
    int m=haystack.size(),n=needle.size();
    int count=0;
    for(int i=0;i<=m-n;i++)
    {
        int j;
        for(j=0;j<n;j++)
            if(haystack[i+j]!=needle[j])
                break;
        if(j==n)
            return i;
    }
    return -1;
}

int main() {
    string text,pattern;
    cin>>text;
    cin>>pattern;
    int result=strStr(text,pattern);
    printf("%d",result);
    return 0;
}
