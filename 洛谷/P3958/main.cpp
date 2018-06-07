#include<bits/stdc++.h>
using namespace std;

struct _node
{
    double x;
	double y;
	double z;
	int note;
};

typedef _node node;
typedef long long LL;

int T;
node _map[1005];
int n;
LL h, r;
int mark[1005][1005] = {0};
int vis[1005] = {0};
queue<node> Q;

LL dist(node a, node b)
{
	return ((a.x-b.x) * (a.x-b.x) + (a.y-b.y) * (a.y-b.y) + (a.z-b.z) * (a.z-b.z));
}

void init()
{
    memset(vis, 0, sizeof(vis));
	memset(mark, 0, sizeof(mark));
	for (int i = 1; i <= n; i++)
	for (int j = 1; j <= n; j++)
	{
		if (dist(_map[i], _map[j]) <= 2*2*r*r && i != j)  mark[i][j] = 1;
	}
}

int bfs()
{
    while (!Q.empty())
    {
        node cur = Q.front();
        if (abs(cur.z - (double)h) <= (double)r) return 1;
        Q.pop();
        for (int i = 1; i <= n; i++)
        {
            if ((mark[cur.note][i] || mark[i][cur.note]) && !vis[i])
            {
                Q.push(_map[i]);
                vis[i] = 1;
            }
        }
    }
    return 0;
}

int main()
{
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	scanf("%d", &T);
	while (T --)
	{
		scanf("%d%lld%lld", &n, &h, &r);
		for (int i = 1; i <= n; i++)
        {
            scanf("%lf%lf%lf", &_map[i].x, &_map[i].y, &_map[i].z);
            _map[i].note = i;
        }
		init();
		while(!Q.empty())  Q.pop();
		for(int i = 1; i <= n; i++)
        {
            if(_map[i].z <= (double)r)
            {
                Q.push(_map[i]);
                vis[i] = 1;
            }
        }
        if(bfs())  printf("Yes\n");
        else  printf("No\n");
	}
	return 0;
}
