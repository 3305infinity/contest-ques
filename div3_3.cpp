#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{	
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
	cin>>t;
	int n,m;	
	string s="";
	while(t--)
	{   cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++)
		{
		   cin>>v[i];	
		}
		cin>>m;
		unordered_map <int,char> p;
		unordered_map <char,int> q;
		for(int i=0;i<m;i++)
		{
			bool ans=true;
			cin>>s;
			if(s.length()!=n)
			{
				cout << "NO" << endl;
                continue;
			}
			else
			{
				for(int j=0;j<n;j++)
				{
					if(p.count(v[j])==0 && q.count(s[j])==0)
					{
						p[v[j]]=s[j];	
						q[s[j]]=v[j];				
					}
					else if ( p.count(v[j])>0 && q.count(s[j])>0)
					{
						if(p[v[j]]!=s[j] || q[s[j]]!=v[j])
						{
							ans=false;
							break;
						}
					}
					else
					{
						ans=false;
						break;
					}
				}
			}
			    if(ans)
				{
					cout<<"YES"<<endl;
				}
				else
				{
					cout<<"NO"<<endl;
				}
		}		
	}
    return 0;  
}


