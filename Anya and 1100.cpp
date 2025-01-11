#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	int n;
	long long int k;
	while(t--)
	{	
	    string s;
	    cin>>s>>k;int total=0;
	    if(s.length()>=4)
	    {
	    	for(int i=0;i<=s.length()-4;i++)
	    {
	    	if(s.substr(i,4)=="1100")
	    	total++;
		}
	    while(k--)
	    {   
		    long long int a=0;
		    int b1;
	    	cin>>a>>b1;
	    	int c=0;
	    	char b=(b1==1)?'1':'0';
	    	char ch=s[a-1];
	    	if(ch!=b)
	    	{
	    		for(long long int i=max(0LL,a-4);i<=min((long long int)s.size()-4,a-1);i++)
	    		{
	    			if(s.substr(i,4)=="1100")
	    			c--;
				}
				s[a-1]=b;
				for(long long int i=max(0LL,a-4);i<=min((long long int)s.size()-4,a-1);i++)
	    		{
	    			if(s.substr(i,4)=="1100")
	    			c++;
				}
				total+=c;
			}
			if(total > 0)
			cout<<"Yes"<<endl;
			else
			cout<<"No"<<endl;
		}
		}
		else
		{
		while(k--)
	    {   
		    int a=0;
		    int b1;
	    	cin>>a>>b1;
			cout<<"No"<<endl;
		}	
		}
	}
	return 0;
}
