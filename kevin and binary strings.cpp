#include<bits/stdc++.h>
using namespace std;
int xorstrings(string s,string t)
{
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		if(s[i]==t[i])
		s[i]='0';
		else
		s[i]='1';
	}long long num=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1')
		num=num+pow(2,n-i-1);
	}
	return num;
}
int main()
{	
    int t;
	cin>>t;

	while(t--)
	{	
		string s;
		cin>>s;
		int l1=1;int r1=s.length();int l2=s.length();
		int r2=s.length();
		int ind=-1;
		for(int i=0;i<r1;i++)
		{
			if(s[i]=='0')
			{
				ind=i;
				break;
			}
		}
//		int max=0;
		if(ind!=-1)
		{ 
		    string t=(s.substr(ind));
		    int l=t.length();
			long long max=-1;int p=0;
		    for(int i=0;i<ind;i++)
		    {
		    	string str=(s.substr(i,l));
		    	int k=xorstrings(str,t);
		    	if(k>max && i+l<=r1)
		    	{
		    		p=i;
		    		max=k;
				}
			}
			l2=p+1;
			r2=p+l;	    
		}
		cout<<l1<<' '<<r1<<' '<<l2<<' '<<r2<<endl;
	}
	return 0;
}

