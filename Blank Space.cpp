#include<bits/stdc++.h>
using namespace std;
int main()
{	int t,row,col,k;
	cin>>t;
	int n;
	for(int j=0;j<t;j++)
	{	
		cin>>n;
        vector<int>a(n);		
		for(int i=0;i<n;i++)
		{
			cin>>a[i]; 
		}
		int f=0;int l=-1; int diff=0;
		if(a[0]==0)
		{
			f=0;l=0;
		}
		for(int i=1;i<n;i++)
		{
			if(a[i]==0 && a[i-1]==1)
			f=i;
			else if(a[i]==0 && a[i-1]==0)
			{
				continue;
			}
			else if(a[i]==1 && a[i-1]==0)
			{
				l=i-1;
				diff=max(diff,l-f+1);
			}
		}
		if(a[n-1]==0)
		l=n-1;
		diff=max(diff,l-f+1);
		
		cout<<diff<<endl;
	}
	return 0;
}



