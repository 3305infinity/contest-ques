#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	vector<int> ans(t);
	int a1,a2,b1,b2;
	for(int i=0;i<t;i++)
	{
		cin>>a1;
		cin>>a2;
		cin>>b1;
		cin>>b2;
		//case 1 and 2
		int c=0;
		if(a1>b1&&a2>b2)
		{
            c=c+2;
		}
		else if(a1==b1&&a2>b2)
		{
			c=c+2;		   
		}
		else if(a1>b1&&a2==b2)
		{
			c=c+2;			
		}
		// case 3 and 4 
		if(a2>b1&&a1>b2)
		{
            c=c+2;
		}
		else if(a2==b1&&a1>b2)
		{
			c=c+2;		   
		}
		else if(a2>b1&&a1==b2)
		{
			c=c+2;			
		}
		ans[i]=c;
		
	}
	for(int i=0;i<t;i++)
	{
		cout<<ans[i]<<endl;
	}
	
	return 0;
}
