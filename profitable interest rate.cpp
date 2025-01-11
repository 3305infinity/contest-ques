#include<bits/stdc++.h>
using namespace std;

int main()
{	int n;
    int t;
    cin>>t;
    int a,b;
	while(t--)
	{	
	   cin>>a>>b;
	   if(a>=b)
	   {
	   	    cout<<a<<endl;
	   	    continue;	   	
	   }int flag=0;
	   if(b-2*a>=0)
	   {
	   	cout<<"0"<<endl;
	   	continue;
	   }
	   for(int x=b-a;x>=1;x--)
	   {
	   	if(a-x>=b-2*x)
	   	{
	   		cout<<a-x<<endl;
	   		flag=1;
	   		break;
		   }
	   }
	   if(flag==0)
	   cout<<0<<endl;
	}
	return 0;
}

