#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    cin >> n>>m;
    vector<vector<char>>v(n,vector<char>(m,0));
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	{
    		cin>>v[i][j];
		}
	}
	queue<pair<int,int>>q;
	vector<vector<int>>vis(n,vector<int>(m,0));
	int cnt=0;
	int drow[]={-1,0,1,0};
	int dcol[]={0,-1,0,1};
    for(int k=0;k<n;k++)
    {
        for(int p=0;p<m;p++)
        {
            if(v[k][p]=='.' && !vis[k][p])
            { 
                cnt++;
                q.push({k,p});vis[k][p]=1;
            while(!q.empty())
         	{
	        int r=q.front().first;	
	        int c=q.front().second;q.pop();
		    for(int i=0;i<4;i++)
		    {
			int x=r+drow[i];
			int y=c+dcol[i];
			if(x>=0 && x<n && y>=0 && y<m && vis[x][y]!=1 && v[x][y]=='.' )
		    {
		    	vis[x][y]=1;
		    	q.push({x,y});
			}
	        }	
	    }
        }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
