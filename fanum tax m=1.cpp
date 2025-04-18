#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int b;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        cin >> b;
        bool pos = true;
        int prev = INT_MIN;
        
        for (int i = 0; i < n; i++)
        {
            vector<int> v = {a[i], b - a[i]};
            bool flag = true;
            sort(v.begin(),v.end());
            for (int j = 0; j < 2; j++) // Fixed incorrect loop limit
            {
                if (v[j] >= prev) // Fixed comparison logic
                {
                    prev = v[j];
                    flag = false;
                    break;
                }
            }
            
            if (flag)
            {
                pos = false;
                break;
            }
        }
        
        if (pos)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

