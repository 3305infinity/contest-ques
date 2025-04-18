#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector < vector < int >> v(n + 1);
    vector < int > ans(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    vector < int > parent(n + 1, -1);
    queue < int > q;
    vector < int > vis(n + 1, 0);
    bool flag = false;
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            q.push(i);
            ans[i] = 1;
            vis[i] = 1;
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                for (auto it: v[node])
                {
                    if (!vis[it])
                    {
                        ans[it] = 3-ans[node];
                        vis[it] = 1;
                        q.push(it);
                    }
                    else if(ans[it]==ans[node])
                    {
                        flag = true;
                        break;
                    }
                    parent[it] = node;
                }
            }
        }
        if (flag)
            break;
    }
    if (flag)
        cout << "IMPOSSIBLE" << endl;
    else
    {
        for (int i = 1; i <= n; i++)
            cout << ans[i] << " ";
    }
    cout << endl;
}
