#include <bits/stdc++.h>
using namespace std;

string addStrings(string num1, string num2) {
    int i=num1.size()-1,j=num2.size()-1,flag=0;
    string ans="";
    while(i>=0||j>=0||flag!=0)
    {
        int x=0,y=0;
        if(i>=0)
            x=num1[i]-'0';
        if(j>=0)
            y=num2[j]-'0';
        int a=x+y+flag;
        ans.push_back('0'+a%10);
        flag=a/10;
        i--;
        j--;
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main() {
    string x,y;
    cin>>x;
    cin>>y;
    string sum=addStrings(x,y);
    cout<<sum;
    return 0;
}
