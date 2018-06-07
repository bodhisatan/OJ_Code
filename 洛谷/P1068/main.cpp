#include<bits/stdc++.h>
using namespace std;

struct TangYue
{
    int k, s;
} stu[5005], ans[5005];

int n, m;

bool _cmp(TangYue A, TangYue B)
{
    if(A.s != B.s) return A.s > B.s;
    else return A.k < B.k;
}

int main()
{
    int tot = 0;
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n ; i++)
        scanf("%d%d", &stu[i].k, &stu[i].s);
    sort(stu, stu + n, _cmp);
    int buf = m * 1.5;
    tot += buf;
    for(int i = 0; i < buf; i++)
        ans[i].k = stu[i].k, ans[i].s = stu[i].s;
    if(stu[buf-1].s == stu[buf].s)
    {
        int q = buf;
        for(; ;)
        {
            ans[q].k = stu[q].k;
            ans[q].s = stu[q].s;
            q++;
            tot++;
            if(stu[q].s != stu[buf-1].s)  break;
        }
    }
    printf("%d %d\n", ans[tot-1].s, tot);
    for(int i = 0; i < tot; i++)
        printf("%d %d\n", ans[i].k, ans[i].s);
}
