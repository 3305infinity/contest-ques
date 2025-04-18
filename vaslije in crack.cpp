#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) 
	{
        long long n,k,x;
        cin>>n>>k>>x;
        long long sum=(n*(n+1))/2;
        long long p=((n-k)*(n-k+1))/2;
        long long a=(k*(k+1))/2;
        if(x>=a && x<=sum-p)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}

