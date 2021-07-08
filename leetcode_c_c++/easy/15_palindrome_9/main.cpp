#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    int result=0;
    if(x<0||(x%10==0&&x!=0))
        return false;
    while(x>result)
    {
        int tem=x%10;
        x/=10;
        result=result*10+tem;
    }
    return x==result||x==result/10;
}

int main() {
    int h;
    scanf("%d",&h);
    bool cur= isPalindrome(h);
    printf("%d",cur);
    return 0;
}
