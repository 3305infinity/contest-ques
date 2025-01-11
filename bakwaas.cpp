
#include<bits/stdc++.h>
using namespace std;
int main()
{	int t;
	cin>>t;
	int n;
	vector<int>ans;
	for(int i=0;i<t;i++)
	{	cin>>n;
		vector<int>alice(n);
		vector<int>bob(n);
		for(int i=0;i<n;i++)
		{
			cin>>alice[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>bob[i];
		}
		vector<int>c;
		c=bob;
		reverse(c.begin(),c.end());
		if(alice==bob||alice==c)
		{
			cout<<"Bob"<<endl;
		}
		else
		{
			cout<<"Alice"<<endl;
		}
	}
	return 0;
}



