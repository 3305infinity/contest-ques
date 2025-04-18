#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        
        int c=0;
        vector<int>vis(n,0);
        sort(v.begin(),v.end());
        int s=0;int e=n-1;
        while(s<e)
        {
        	
        	if(v[s]+v[e]==k && vis[s]==0 && vis[e]==0)
        	{
        		vis[s]=1;vis[e]=1;
        		c++;s++;e--;
			}
			if(v[s]+v[e]<k)
			s++;
			if(v[s]+v[e]>k)
			{
				e--;
			}
		}
		cout<<c<<endl;
    }
    return 0;
}

