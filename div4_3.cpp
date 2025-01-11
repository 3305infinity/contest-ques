#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,s,m,l,r;
	cin>>t;
	vector<string> ans(t);
	int a1,a2,b1,b2;
	
	for(int i=0;i<t;i++)
	{
		cin>>n;
		cin>>s;
		cin>>m;
		 vector<pair <int,int> > p(n);
		for(int k=0;k<n;k++)
		{
			cin>>p[k].first;
			cin>>p[k].second;			
		}
		int startgap=p[0].first-0;
		if(startgap>=s)
		{
			ans[i]="YES";
			continue;
		}
		int gap=0;
		for(int j=0;j<n-1;j++)
		{
//			if((p[j+1].first-p[j].second)=1)
			{
				gap=max(gap,p[j+1].first-p[j].second);
			}
		}
		int lastgap=m-p[n-1].second;
		gap=max(gap,lastgap);
		if(gap>=s)
		ans[i]="YES";
		else
		ans[i]="NO";
	}
	for(int i=0;i<t;i++)
	{
		cout<<ans[i]<<endl;
	}
	
	return 0;
}
