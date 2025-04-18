#include <bits/stdc++.h>
using namespace std;
bool checkrow( vector<vector<int>>&a,int x,int y)
{
	for(int j=y;j>=0;j--)
		{
			if(a[x][j]==0)
			return false;
//			else
//			vis[x][j]=1;
		}
	return true;
}
bool checkcol( vector<vector<int>>&a,int x,int y)
{
	for(int i=x;i>=0;i--)
		{
			if(a[i][y]==0)
			return false;
//			else
//			{
//				vis[i][y]=1;
//			}
		}
	return true;
}
int main() {
    int t;
    cin >> t;
    while (t--) 
	{   
	    int n,m;
	    cin>>n>>m;	
	    vector<vector<int>>a(n,vector<int>(m,0));
	    vector<string>s;
//	    vector<vector<int>>vis(n,vector<int>(m,0));
        string st;
        for(int i=0;i<n;i++)
        {
            cin>>st;
            s.push_back(st);
    
        }
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
			    if(s[i][j]=='1')
				a[i][j]=1;
			}
		}	
		bool flag=true;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if( a[i][j]==1)
				{
					if(!checkcol(a,i,j) && !checkrow(a,i,j))
					{
						flag=false;
						break;
					}
				}
			}
			if(!flag)
			break;
		}
		if(flag)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}    
    return 0;
}

