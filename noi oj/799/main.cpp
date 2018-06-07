/*
    dijkstra (maybe >kruskal)
*/

#include<bits/stdc++.h>
using namespace std;
#define inf -999999999

int _map[1005][1005];
bool vis[1005];
int dist[1005];

int dijkstra(int n,int u,int v)
{
    int minn, i, j, pos;
    memset(vis,false,sizeof(vis));
    for(i = 1; i <= n; i++)
        dist[i] = _map[u][i];
    dist[u] = 0;
    vis[u] = true;
    for(i = 1; i < n; i++)
    {
        minn = inf;
        for(j = 1; j <= n; j++)
            if(!vis[j] && dist[j] > minn)
            {
                minn = dist[j];
                pos = j;
            }
        if(minn == inf) break;
        vis[pos] = true;
        for(j = 1; j <= n; j++)
            if(!vis[j] && dist[j] < min(dist[pos], _map[pos][j]))
                dist[j] = min(dist[pos], _map[pos][j]);
    }
    return dist[v];
}

int main()
{
    int T;
    scanf("%d", &T);
    for(int plan = 1; plan <= T; plan++)
    {
        int n, m;
        scanf("%d%d", &n, &m);
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)  _map[i][j] = inf;
        for(int i = 1; i <= m; i++)
        {
            int u, v, w;
            scanf("%d%d%d", &u, &v, &w);
            _map[u][v] = w;
            _map[v][u] = w;
        }
        printf("Scenario #%d:\n", plan);
        printf("%d", dijkstra(n, 1, n));
        if(plan != T) printf("\n\n");
    }
}
