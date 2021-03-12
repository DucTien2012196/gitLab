#include<bits/stdc++.h>
using namespace std;

vector <int> g[100001];
stack <int> s;
int n, m, u, v, cc, cnt, num[10001], low[100001], av[100001];

int tarjan(int u)
{
	cc++;
	num[u] = cc; low [u]= cc;
	s.push(u);
	for (int i = 0; i < g[u].size(); i++)
		if (av[g[u][i]]== 0)
		{
			if (num[g[u][i]] == 0)
			{
				tarjan(g[u][i]);
				low[u] = min(low[u], low[v]);
			}
			else
				low[u] = min(low[u], num[v]);
		}
		if (low[u] == num[u])
		{
			v = 0;
			cnt++;
			while (v != u)
			{
				av[v] = cnt;
				s.pop();
			}
		}
}
int main()
{
	freopen("test.inp","r",stdin);
	freopen("test.out","w",stdout);
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	cout << cnt;
}
