#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	vector<int> ans(t);
	
	for(int i=0;i<t;i++)
	{
		cin>>n;
		int sum=n%10+(n/10)%10;
		ans[i]=sum;
	}
	for(int i=0;i<t;i++)
	{
		cout<<ans[i]<<endl;
	}
	return 0;
}



