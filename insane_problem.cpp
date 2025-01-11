
#include<bits/stdc++.h>
using namespace std;

int main() {    
    int t;
    cin >> t;

    while (t--) {    
        long long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        vector<long long> a;
        long long p = 1;

        while (p <= r2) {
            a.push_back(p);
            if (p > LLONG_MAX / k) {
                break;
            }
            p *= k;
        }

        long long count = 0;
          for (int j=0;j<a.size();j++) {
            	long long  power=a[j];
            long long x_start = max(l1, (l2 + power - 1) / power); 
            long long x_end = min(r1, r2 / power);

            if (x_start <= x_end) {
                count += (x_end - x_start + 1);
            }
        }

        cout << count << endl;
    }

    return 0;
}

