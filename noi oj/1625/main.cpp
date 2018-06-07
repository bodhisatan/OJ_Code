#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

LL num[250005];

int main()
{
    int n;
    while(~scanf("%d", &n))
    {
        for(int i = 0; i < n; i++)
            scanf("%lld", &num[i]);
        sort(num, num+n);
        if(n % 2 == 1) printf("%.1f\n", (double)num[(n-1)/2]);
        else
        {
            double ans = (num[n/2] + num[n/2-1]) / 2.0;
            printf("%.1f\n", ans);
        }
    }
}
