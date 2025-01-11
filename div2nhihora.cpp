
#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin>>t;
	
	vector<int>a(t);
	for(int j=0; j<t; j++)
	{
	    int n;
		cin>>n;
		vector<int>v(n);
		int ans=0;
		unordered_map<int,int> m;
		
			for(int i=0; i<n; i++)
			{
				cin>>v[i];
            	m[v[i]]++;
			}
			int maxi=INT_MIN;
			for(int i=0; i<n; i++)
			{
				maxi=max(m[v[i]],maxi);
			}
			ans=n-maxi;
			if(n==1)
			ans=0;
	        a[j]=ans;
	}
	
	for(int i=0;i<t;i++)
	{
	    cout<<a[i]<<endl;
	}
	return 0;
}
