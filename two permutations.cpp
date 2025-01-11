#include<bits/stdc++.h>
using namespace std;

int main()
{	int n;
    int t;
    cin>>t;
    int a,b;
	while(t--)
	{	
	   cin>>n>>a>>b;
	   if(n==1 )
	   {
	   	cout<<"Yes"<<endl;
	   	continue;
	   }
	   if(n==a && n==b)
	   {
	   	cout<<"Yes"<<endl;
	   	continue;
	   }
	   if(n-a-b>=2 && a<n && b<n)
	   cout<<"Yes"<<endl;
	   else
	   cout<<"No"<<endl;
	}
	return 0;
}


