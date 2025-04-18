#include <bits/stdc++.h>

using namespace std;
bool dfs(int node,int p, vector < int > & parent, vector < vector < int >> & adj, vector < int > & vis, vector < int > & cycle)
{
    vis[node] = 1;parent[node]=p;
    for (auto it: adj[node])
    {
        if (it == parent[node])
            continue;
        parent[it]=node;
        if (vis[it])
        {
            cycle.push_back(it);
            for (int x = node; x != it; x = parent[x])
            {
                cycle.push_back(x);
            }
            cycle.push_back(it);
            return true;
        }
        if (!vis[it] && dfs(it,node, parent, adj, vis, cycle))
            return true;
    }
    return false;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector < vector < int >> v(n + 1);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    vector < int > vis(n + 1, 0);
    vector < int > parent(n + 1, -1);
    vector < int > cycle;
    bool found = false;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i] && dfs(i,-1, parent, v, vis, cycle))
        {
            found = true;break;
        }
    }
    if (!found)
        cout << "IMPOSSIBLE" << endl;
    else
    {
        reverse(cycle.begin(), cycle.end());
        cout<<cycle.size()<<endl;
        for(auto it:cycle)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }
    cout << endl;
}
