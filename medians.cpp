
#include<bits/stdc++.h>
using namespace std;
int main()
{	
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
	cin>>t;
	 int n,k;
	for(int j=0;j<t;j++)
	{
		cin>>n;
		cin>>k;
		if(n==1 && k==1)
		{
			cout<<1<<endl;
			cout<<1<<endl;
			continue;
		}
		if(k==1 || k==n)
		{
			cout<<-1<<endl;
			continue;
		}
		cout<<3<<endl;
		if(k%2==0 )
		{
			cout<<1<<" "<<k<<" "<<k+1<<endl;
		}
		else
		{
			cout<<1<<" "<<k-1<<" "<<k+2<<endl;
		}
	}
		return 0;
}


