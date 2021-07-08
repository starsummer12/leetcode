#include <bits/stdc++.h>
#define N 205
using namespace std;

/*2:分治
分治算法：适用场景，原问题能被分解成多个子问题且这些子问题能够合并成原问题的解。
lcp函数中if……else不加的话会导致内存溢出，lcp函数的作用是将strs这个字符串划分成子问题去求解，
 求解完成以后再使用common函数进行求解，min（size()）去求解子字符串的公共长度。用if去进行判断以后return公共字符的长度
*/
string common(const string &left,const string &right)
{
    int minlength=min(left.size(),right.size());
    for(int i=0;i<minlength;i++)
    {
        if(left[i]!=right[i])
            return left.substr(0,i);
    }
    return left.substr(0,minlength);
}

string lcp(const vector<string> &strs,int start,int end)
{
    if(start==end)
        return strs[start];
    else
    {
        int mid=(start+end)>>1;
        string lcpleft=lcp(strs,start,mid);
        string lcpright=lcp(strs,mid+1,end);
        return common(lcpleft,lcpright);
    }
}

string longestCommonPrefix(vector<string>& strs)
{
    if(!strs.size())
        return "";
    else
        return lcp(strs,0,strs.size()-1);
}


int main() {
    vector<string> strs;
    int x;
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        string b;
        cin>>b;
        strs.push_back(b);
    }
    string com=longestCommonPrefix(strs);
    cout<<com;
    return 0;
}
