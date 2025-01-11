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
		if(n==1)
		{
			cout<<1<<endl;
			continue;
		}
		if(n==2)
		{
			cout<<-1<<endl;
			continue;
		}
		if(n==3)
		{
			cout<<3<<" "<<1<<" "<<2<<endl;
			continue;
		}
//		int c=1;
//		for(int i=1;i<n;i++)
//		{
//             p[i]=c++;
//		}
//        p[0]=c;
//
//		for(int i=0;i<n;i++)
//		{
//			cout<<v[i]<<" ";
//		}
//		cout<<endl;
else
{
	cout<<-1<<endl;
}
	}
	
	
	return 0;
}
