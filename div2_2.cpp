#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n;
	vector<int>ans;
	
	for(int i=0;i<t;i++)
	{
		cin>>n;
		vector<int>v(n);
		for(int i=0;i<n;i++)
		{
			cin>>v[i];
		}
		for(int i=0;i<n;i++)
		{
			swap(v[(n/2-i)],v[i]);
		}
		for(int i=0;i<n;i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}



