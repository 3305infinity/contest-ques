
#include<bits/stdc++.h>
using namespace std;
int main()
{	int t;
	cin>>t;
	int n;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		vector<int>v(n);
		for(int j=0;j<n;j++)
		{
			cin>>v[j];
		}
		sort(v.begin(),v.end());
		
		int mean=(v[0]+v[1])/2;
		int x=mean;
		for(int j=2;j<n;j++)
		{
			x=(mean+v[j])/2;
			mean=x;
		}
		cout<<x<<endl;
	}
	return 0;
}
