#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int n,m;
	string s="";
	for(int i=0;i<t;i++)
	{
		cin>>n;
		cin>>s;
		int l=sqrt(n);
		if(l==ceil(sqrt(n)))
		{
			bool sq=true;
		// checking the first row
		for(int j=0;j<l;j++)
		{
			if(s[j]!='1')
			sq=false;
		}
		if(!sq)
		{
			cout<<"NO"<<endl;
			continue;
		}
		// checking the last row 
		for(int j=n-l;j<n;j++)
		{
			if(s[j]!='1')
			sq=false;
		}
		if(!sq)
		{
			cout<<"NO"<<endl;
			continue;
		}
		// checking boundary row
		for(int j=0;j<n;j=j+l)//left side
		{
			if(s[j]!='1')
			sq=false;
		}
		if(!sq)
		{
			cout<<"NO"<<endl;
			continue;
		}
		for(int j=l-1;j<n;j=j+l)//  right side
		{
			if(s[j]!='1')
			sq=false;
		}
		if(!sq)
		{
			cout<<"NO"<<endl;
			continue;
		}
		
		for(int j=l+1;j<n-l-1;j++)
		{
			if((j+1)%l==0)
			{
				j=(l*((j+1)/l)+1);
			}
			if(s[j]!='0')
			sq=false;
		}
		if(!sq)
		{
			cout<<"NO"<<endl;
		}
		else
		{
		
			cout<<"YES"<<endl;
		}
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}


