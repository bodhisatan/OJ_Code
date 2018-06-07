/*
    二分图 匈牙利算法
*/

#include<bits/stdc++.h>
using namespace std;

int n, m, s, v;

struct _map
{
    double x, y;
} hole[105], gopher[105];

int link[105][105];
int match[105];
int book[105];

double dist(_map A, _map B)
{
    return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
}

int dfs(int u)
{

}

int main()
{
    while(~scanf("%d%d%d%d", &n, &m, &s, &v))
    {
        memset(link, 0, sizeof(link));
        memset(book, 0, sizeof(book));
        memset(match, 0, sizeof(match));
        for(int i = 1; i <= n; i++)
            scanf("%lf%lf", &hole[i].x, &hole[i].y);
        for(int i = 1; i <= m; i++)
            scanf("%lf%lf", &gopher[i].x, &gopher[i].y);
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++)
        {
            if(dist(hole[i], gopher[j]) / (double)v <= (double) s)  link[i][j] = 1;
        }

    }
}
