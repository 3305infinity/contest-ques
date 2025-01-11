// #include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<unordered_map>


using namespace std;
int main()
{	int t;
	cin>>t;
	int n,m;	
	string s="";
	while(t--)
	{
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++)
		{
		   cin>>v[i];	
		}
		cin>>m;
		vector<string>ans(m);
		unordered_map <int,char> p;
		unordered_map <char,int> q;
		for(int i=0;i<m;i++)
		{
			bool ans=true;
			cin>>s;
			if(s.length()>n)
			{
				ans="NO";
				break;
			}
			else
			{
				for(int j=0;j<n;j++)
				{
					if(p.count(v[i])==0 && q.count(s[i])==0)
					{
						p[v[i]]=s[i];						
					}
					else if(p.count(v[j])>0||q.count(s[i])>0)
					{
						if(p[v[j]]!=0||q[s[j]]!=0)
						{
							ans=false;
						}
					}
					else
					{
						ans=false;
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
	}
	   return 0;  
	}