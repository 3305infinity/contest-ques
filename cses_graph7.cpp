#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector < vector < char >> v(n ,vector<char>(m));
    vector < vector < int >> vis(n ,vector<int>(m,0));
    vector < vector < char >> d(n ,vector<char>(m,0));
    vector < vector < pair<int,int> >> parent(n,vector<pair<int,int>>(m,{-1,-1}));
    queue<pair<int,int>>q;
    pair<int,int>start;vector<vector<int>>dist(n,vector<int>(m,-1));
    // pair<int,int>start;
    vector<vector<int>>playerdist(n,vector<int>(m,-1));
    bool found =false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(v[i][j]=='A')
            {
                start={i,j};
                vis[i][j]=1;
            }
            else if(v[i][j]=='M')
            {
                q.push({i,j});
                dist[i][j]=0;
            }
        }
    }
    int drow[]={-1,0,1,0};
    int dcol[]={0,1,0,-1};
    char dir[]={'U','R','D','L'};
    // MONSTER DISTANCE --------------------------------------------------------------------
    while(!q.empty())
    {
        int x=q.front().first;int y=q.front().second;
        q.pop();
        for(int i=0;i<4;i++)
        {
            int nx=x+drow[i];
            int ny=y+dcol[i];
            if( nx>=0 && nx<n && ny>=0 && ny<m && dist[nx][ny]==-1  && v[nx][ny]!='#'){
                dist[nx][ny]=dist[x][y]+1;
                q.push({nx,ny});
            }
        }
    }
    pair<int,int>dest;
    q.push(start);
    playerdist[start.first][start.second]=0;
    while(!q.empty())
    {
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        if (r == 0 || r == n - 1 || c == 0 || c == m - 1) 
        {
            found = true;
            dest = {r, c};
            break;
        }
        for(int i=0;i<4;i++)
        {
            int nr=r+drow[i];
            int nc=c+dcol[i];
            
            if(nr>=0 && nr<n && nc>=0 && nc<m &&  v[nr][nc]!='#' && playerdist[nr][nc]==-1 )
            {
                if(dist[nr][nc]==-1 || dist[nr][nc]>playerdist[r][c]+1 )
                {
                playerdist[nr][nc]=1+playerdist[r][c];
                q.push({nr,nc});
                d[nr][nc]=dir[i]; 
                parent[nr][nc]={r,c};
                }
            }
        }
    }
    if(!found)
    cout<<"NO"<<endl;
    else
    {
        cout<<"YES"<<endl;
        string path;pair<int,int>curr=dest;
        while(curr!=start)
        {
            path+=d[curr.first][curr.second];
            curr=parent[curr.first][curr.second];
        }
         reverse(path.begin(), path.end());
         cout<<path.length()<<endl;
         cout<<path<<endl;
    }
}
