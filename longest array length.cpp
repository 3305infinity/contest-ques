#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int l,r;
	for(int i=0;i<t;i++)
	{
		cin>>l;
		cin>>r;
		int c=0;
		int gap=0;
		for(int j=l;j<=r;j+=gap)
		{
			c++;
			gap++;
		}
		cout<<c<<endl;
	}
	return 0;
}


