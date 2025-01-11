
#include<bits/stdc++.h>
using namespace std;
int main()
{	
// ios::sync_with_stdio(0);
//     cin.tie(0);
    int t;
	cin>>t;
	 int n;
	for(int j=0;j<t;j++)
	{
		cin>>n;
		vector<int>a(2*n);
		int max=0;int mini=0;
		int one=0;int zero=0;
		for(int i=0;i<2*n;i++)
		{
			cin>>a[i];
			if(a[i]==0)
			zero++;
			if(a[i]==1)
			one++;
		}
		if(one%2==0 && zero%2==0)// both even
		{
				mini=0;
				max=min(zero,one);
		}
		else
		{
				mini=1;
				max=min(zero,one);
		}
		cout<<mini<<" "<<max;
		cout<<endl;
	}
		return 0;
}


