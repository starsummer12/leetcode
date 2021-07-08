#include <bits/stdc++.h>
using namespace std;
bool isValid(string s) {
    stack<char> st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='('||s[i]=='['||s[i]=='{')
            st.push(s[i]);
        else
        {
            if(s[i]==')'&&!st.empty()&&st.top()=='(')
                st.pop();
            else if(s[i]==']'&&!st.empty()&&st.top()=='[')
                st.pop();
            else if(s[i]=='}'&&!st.empty()&&st.top()=='{')
                st.pop();
            else
                return false;
        }
    }
    return st.empty();
}
int main() {
    char ins[30] = {0};
    //string ins;
    scanf("%s",ins);
    bool result= isValid(ins);
    printf("true or false:%d",result);
    return 0;
}
