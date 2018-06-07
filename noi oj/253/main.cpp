/*
    kruskal
*/

#include<bits/stdc++.h>
using namespace std;

int f[100];
int cnt;

struct node
{
    int u,v;
    int r;
    friend bool operator < (node a, node b)
    {
        return a.r < b.r;
    }
}edge[100];

void inserts(int u,int v,int w)
{
    edge[cnt].u = u;
    edge[cnt].v = v;
    edge[cnt++].r = w;
}

void init(int n)
{
    cnt = 0;
    for(int i = 1; i <= n; i++)
        f[i] = i;
}

int getf(int u)
{
    if(f[u] != u)
        f[u] = getf(f[u]);
    return f[u];
}

bool unions(int x,int y)
{
    x = getf(x);
    y = getf(y);
    if(x != y)
    {
        f[x] = y;
        return false;
    }
    return true;
}

int kruskal(int n,int m)
{
    sort(edge, edge+m);
    int i,k,res;
    i = k = res = 0;
    while(k < n-1)
    {
        if(i == m)break;
        //并查集判断不形成环，则该边加入生成树中
        if(!unions(edge[i].u,edge[i].v))
        {
            k++;
            res += edge[i].r;
        }
        i++;
    }
    if(k < n-1) return -1;
    return res;
}

int main()
{
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
    int n;
    while(~scanf("%d", &n) && n != 0)
    {
        init(n);
        for(int ii = 1; ii < n; ii++)
        {
            char start_;
            int tot;
            scanf("\n%c %d", &start_, &tot);
            while(tot--)
            {
                char end_;
                int dis;
                scanf(" %c %d", &end_, &dis);
                inserts(start_ - 'A' + 1, end_ - 'A' + 1, dis);
            }
        }
        int ans = kruskal(n, cnt);
        printf("%d\n", ans);
    }
}
