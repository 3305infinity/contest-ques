#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        vector<vector<int>>v(n,vector<int>(m));
        for(int i=0;i<n;i++)
        {
        	for(int j=0;j<m;j++)
        	{
        		cin>>v[i][j];
			}
			sort(v[i].begin(),v[i].end());
		}
		vector<int>vec;
		priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
		for(int i=0;i<n;i++)
		{
			pq.push({v[i][0],i+1});
		}
		while(!pq.empty())
		{
			int a=pq.top().second;
			pq.pop();
			vec.push_back(a);
		}
		// check
		bool ans=true;
		int x=v[vec[0]-1][0];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				int y=v[vec[j]-1][i];
				if(x>y)
				{
					ans=false;
					break;
				}
				x=y;	
			}
			if(ans==false)
			break;
		}
		if(ans)
		{
			for(int i=0;i<n;i++)
			cout<<vec[i]<<" ";
			cout<<endl;
		}
		else
		cout<<-1<<endl;
		
    }
    return 0;
}

