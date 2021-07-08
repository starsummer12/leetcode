#include <bits/stdc++.h>
using namespace std;

int  *culnext(string needle)
{
    int *next=new int[needle.size()];
    char prenext[50005];
    strcpy(prenext,needle.c_str());
    next[0]=-1;
    int mpos=-1,m=needle.size();
    for(int i=1;i<m;i++)
    {
        while(mpos>=0&&prenext[mpos+1]!=prenext[i])
            mpos=next[mpos];
        if(prenext[mpos+1]==prenext[i])
            mpos+=1;
        next[i]=mpos;
    }
    return next;
}

int strStr(string haystack, string needle) {
    if(!needle.size())
        return 0;
    int result;
    int *prepi=culnext(needle);
    char pa[50005];
    strcpy(pa,needle.c_str());
    int matchpos=-1,m=haystack.size(),n=needle.size();
    for(int i=0;i<m;i++)
    {
        while(matchpos>=0&&pa[matchpos+1]!=haystack.at(i))
            matchpos=prepi[matchpos];
        if(pa[matchpos+1]==haystack.at(i))
            matchpos+=1;
        if(matchpos==n-1)
        {

            return i-matchpos;
            // matchpos=prepi[matchpos];
            // return result=i-matchpos;
            // matchpos=prepi[matchpos];
        }
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
