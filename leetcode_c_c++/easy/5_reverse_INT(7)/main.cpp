#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int tep=0;
    while(x!=0)
    {
        if(tep<INT_MIN/10||tep>INT_MAX/10)
        {
            return 0;
        }
        int rev=x%10;
        x=x/10;
        tep=tep*10+rev;
    }
    return tep;
}

int main() {
    int x;
    scanf("%d",&x);
    int y=reverse(x);
    printf("%d",y);
    return 0;
}
