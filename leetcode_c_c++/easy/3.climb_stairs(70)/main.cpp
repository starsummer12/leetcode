#include <bits/stdc++.h>
using namespace std;

int climbStairs(int n) {
    int p=0,q=0,r=1;
    for(int i=1;i<=n;i++)
    {
        p=q;
        q=r;
        r=p+q;
    }
    return r;
}
int main() {
    int i;
    scanf("%d",&i);
    int result=climbStairs(i);
    printf("%d",result);
    return 0;
}
