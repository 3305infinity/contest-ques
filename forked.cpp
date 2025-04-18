#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) 
	{
        int a,b,xk,yk,xq,yq;
        cin>>a>>b>>xk>>yk>>xq>>yq;
        vector<int>r={-1,1,1,-1};
        vector<int>c={1,-1,1,-1};
        set<pair<int,int>>k, q;
        for(int i=0;i<4;i++)
        {
        	for(int j=0;j<4;j++)
        	{
        		int dr1=r[i]*a;
        		int dc1=c[j]*b;
        		int dr2=r[i]*b;
        		int dc2=c[j]*a;
        		k.insert({xk+dr1,yk+dc1});
        		q.insert({xq+dr1,yq+dc1});
        		k.insert({xk+dr2,yk+dc2});
        		q.insert({xq+dr2,yq+dc2});
			}
		}
		int z=k.size();int w=q.size();
		int ans=0;
		for(auto it:k)
		{
		    if(q.count(it)>0)
		    {
		        ans++;
		    }
		}
		cout<<ans<<endl;
    }
    return 0;
}

