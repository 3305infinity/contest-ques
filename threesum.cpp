#include <bits/stdc++.h>

using namespace std;
bool solve()
{
    int n, x;
    cin >> n >> x;
    vector < int > v(n);
    vector < pair < int, int >> a;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        a.push_back({
            v[i],
            i+1
        });
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n - 2; i++)
    {
        int target = x - a[i].first;
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int sum = a[left].first + a[right].first;
            if (sum == target)
            {
                vector<int>t={a[i].second,a[left].second,a[right].second};
                sort(t.begin(),t.end());
                cout << t[0] << " " << t[1] << " " << t[2] << endl;
                return 1;
            }
            else if (sum < target)
            {
                left++;
            }
            else
                right--;
        }
    }
    return 0;
}
int main() {
    //    int t;
    //    cin>>t;
    //    while(t--)
    //    {
    //    	
    //	}
    bool flag = solve();
    if (!flag)
        cout << "IMPOSSIBLE" << endl;

}
