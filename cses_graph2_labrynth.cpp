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
	vector<vector<pair<int,int>>>parent(n,vector<pair<int,int>>(m,{-1,-1}));
	int drow[]={-1,0,1,0};
	int dcol[]={0,-1,0,1};
	char dir[]={'U','L','D','R'};
    vector<vector<char>>d(n,vector<char>(m));
    vector<char>ansch;
	pair<int,int> start;
	pair<int,int>dest;
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	{
    		if(v[i][j]=='A')
    		start={i,j};
    		else if(v[i][j]=='B')
    		dest={i,j};
		}
	}
	bool flag=false;
	q.push(start);  vis[start.first][start.second] = 1;
	while(!q.empty())
	{
		int r=q.front().first;
		int c=q.front().second;
		q.pop();
		if(r==dest.first && c==dest.second)
		flag=true;
		for(int i=0;i<4;i++)
		{
			int row=r+drow[i];
			int col=c+dcol[i];
			if(row>=0 && row<n && col>=0 && col<m && !vis[row][col] && v[row][col]!='#' )
			{
				vis[row][col]=1;
				parent[row][col]={r,c};
				d[row][col]=dir[i];
				q.push({row,col});
			}
		}
	}
	
    if (!flag) {
        cout << "NO\n";
        return 0;
    }

	string path;
	pair<int,int>current=dest;
	while(current!=start)
	{
	    path+=d[current.first][current.second];
	    current=parent[current.first][current.second];
	}
	reverse(path.begin(),path.end());

	{cout<<"YES"<<endl;
	cout<<path.length()<<endl;
	cout<<path<<endl;}

    return 0;
}
