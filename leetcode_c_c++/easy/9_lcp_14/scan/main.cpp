#include <bits/stdc++.h>
#define N 205
using namespace std;
//非标准输入输出
/*1:扫描。
以第一个单词为模版进行扫描，进行字符串和第一个单词长度的计算，将第一个单词的各个字母保存起来和其他字母比较，
i==strs.size()||……表示字符串长度已经超出范围或者字母不匹配则返回子字符串。*/
string longestCommonPrefix(vector<string>& strs) {
    if(!strs.size())
        return "";
    int wlength=strs[0].size();
    int length=strs.size();
    for(int i=0;i<wlength;i++)
    {
        char c=strs[0][i];
        for(int j=1;j<length;j++)
        {
            if(i==strs[0].size()||strs[j][i]!=c)
            {
                return strs[0].substr(0,i);
            }
        }
    }
    return strs[0];
}

int main() {
    vector<string> str;
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        string a;
        cin>>a;
        str.push_back(a);
    }
    string com=longestCommonPrefix(str);
    cout<<com;
    return 0;
}

