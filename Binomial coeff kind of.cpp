
#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	 int a[t];
	 int b[t];
	 int mod=1e9+7;
	 int N=1e5;
	for( int j=0;j<t;j++)
	{	
	  cin>>a[j];
	}
	for(int j=0;j<t;j++)
	{	
	  cin>>b[j];
	}	
	
	int C[N+1];
	C[0]=1;
	for(int i=1;i<N;i++)
	{
		C[i]=(C[i-1]*2)%mod;
	}
	for(int i=0;i<t;i++)
	{
		cout<<C[b[i]]<<endl;
	}
	return 0;
}


