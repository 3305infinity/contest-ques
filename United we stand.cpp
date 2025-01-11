#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	int n;
	for(int j=0;j<t;j++)
	{	cin>>n;
	    vector<int>a(n);
	    vector<int>b;
	    vector<int>c;
	    int bi=0;int ci=0;
	    map<int,int>m;
	    for(int i=0;i<n;i++)
	    {
	    	cin>>a[i];
		}
		sort(a.begin(),a.end());
		int maxi=a[n-1];
		for(int i=0;i<n;i++)
		{
			if(a[i]==maxi)
			{
				c.push_back(a[i]);
				ci++;
			}
			else
			{
				b.push_back(a[i]);
				bi++;
			}
		}  
		if(b.empty())
		{
			cout<<-1<<endl;
			continue;
		}
		else
		{
			cout<<bi<<" "<<ci<<endl;
			for(int i=0;i<bi;i++)
			{
				cout<<b[i]<<" ";
			}
			cout<<endl;
			for(int i=0;i<ci;i++)
			{
				cout<<c[i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}



