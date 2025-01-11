#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	for(int j=0;j<t;j++)
	{
		int n,m;
		cin>>n;
		cin>>m;
		vector<int>v(n);
		for(int i=0;i<n;i++) 
		{
			cin>>v[i];
		}
		for(int i=0;i<n;i++)
		{  char s;int l,r;
			cin>>s;
			cin>>l;
			cin>>r;
			int fac;
			if(s=='-')
			{	
				fac=-1;
			}
			else
			{
				
				fac=1;
			}
			int p=l>=0?l:0;
			int q=r<n?r:n-1;
			for(int k=p;k<=q;k++)
			v[k]+=fac;
		}
		for(int i=0;i<t;i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
		
	}
	return 0;
}


