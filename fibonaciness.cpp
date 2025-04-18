#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a1,a2,a4,a5;
        cin>>a1>>a2>>a4>>a5;
        
        int a3=a1+a2;
        int ans1=1;
        if(a3+a2==a4)
        ans1++;
        if(a3+a4==a5)
        ans1++;
        
        a3=a4-a2;
        int ans2=1;
        if(a3+a4==a5)
        ans2++;
        
        cout<<max(ans1,ans2)<<endl;
        
    }
    return 0;
}

