
#include<bits/stdc++.h>
using namespace std;
int main()
{	int t,x;
	cin>>t;
	int n;
	for(int i=0;i<t;i++)
	{	
		cin>>n;
		cin>>x;
		if(n%x!=0)
		{
			cout<<1<<endl;
			cout<<n<<endl;
			continue;
		}
		else 
		{
			cout<<2<<endl;
			cout<<n-1<<" "<<1<<endl;
			continue;
		}
		
		
		
	    	
	}
	return 0;
}



