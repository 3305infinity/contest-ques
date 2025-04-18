#include <bits/stdc++.h>

using namespace std;
bool solve()
{
    int n, x;
    cin >> n >> x;
    vector < int > v(n);
    vector < pair < int, int >> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
       a[i].first=v[i];
       a[i].second=i+1;
    }
    // sort(a.begin(), a.end());
    unordered_map < int, vector<pair < int, int >>> pairsum;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < i; k++)
        {
            pairsum[a[i].first + a[k].first].push_back({ a[i].second,a[k].second });
        }
        for (int j = i + 1; j < n; j++)
        {
            int sum = x - a[i].first - a[j].first;
            if (pairsum.find(sum) != pairsum.end())
            { 
                for (auto [p1, p2]: pairsum[sum])
                {
                    if (p1 != a[i].second && p1 != a[j].second && p2 != a[i].second && p2 != a[j].second)
                    {
                        vector < int > t = {
                            a[i].second,
                            a[j].second,
                            p1,
                            p2
                        };
                        sort(t.begin(), t.end());
                        cout << t[0] << " " << t[1] << " " << t[2] << " " << t[3] << endl;
                        return true;
                    }
                }
            }
        }
        
    }
    return false;
}
int main() {

    bool flag = solve();
    if (!flag)
        cout << "IMPOSSIBLE" << endl;

}
