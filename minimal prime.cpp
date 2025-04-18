#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l,r;
        cin>>l>>r;
        if(l==r&& l==1)
        cout<<1<<endl;
        else
        cout<<abs(l-r)<<endl;
    }
    return 0;
}

