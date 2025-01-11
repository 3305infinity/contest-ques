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
		bool ans=true;
		int ones,twos;
		cin>>ones;
		cin>>twos;
		if(ones%2!=0)  // odd even
		{
			ans=false;
		}
		else if(ones%2==0 && twos%2==0) // even even
		{
			ans=true;
		}		
		else if(ones%2==0 &&ones!=0 && twos%2!=0  ) // even odd
		{
			ans=true;
		}
		else if(ones==0)
		{
			if(twos%2==0)
			ans=true;
			else
			ans=false;
		}
		
		if(ans)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}


