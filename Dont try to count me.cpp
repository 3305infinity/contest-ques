
#include<bits/stdc++.h>
using namespace std;
int main()
{	int t;
	cin>>t;
	int n,m;
	for(int i=0;i<t;i++)
	{	
		cin>>n;
		cin>>m;
		string x,s;
		cin>>x>>s;
		int flag=0;
		int ans=0;
		while(x.size()<=2*m*n)
		{
			if(x.find(s)!=string::npos)
			{
				cout<<ans<<endl;
				flag=1;
				break;
			}
			x+=x;
			ans++;
		}
		if(flag!=1)
		{
			cout<<-1<<endl;
		    continue;
		}
				
				
	}
	return 0;
}



