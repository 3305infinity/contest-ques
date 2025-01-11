#include<bits/stdc++.h>
using namespace std;

int main()
{	int n;
    int t;
    cin>>t;
    int a,b;
	while(t--)
	{	
	   cin>>n;
	   vector<int>v(n);
	   int c=0;
	   int sum=0;int z=0;
	   for(int i=0;i<n;i++)
	   {
	    	cin>>v[i];	   	    
	   }
	   for(int i=1;i<=(n-1)/2;i++)
	   {
	   	 if(v[i]==v[i-1])
	   	 {
	   	 	swap(v[i],v[n-i-1]);
		 }
		 else if(v[n-i-1]==v[n-i])
		 {
		 	swap(v[i],v[n-i-1]);
		 }
	   }
	   
	   for(int i=1;i<n;i++)
	   {
	   	if(v[i]==v[i-1])
	   	c++;
	   }
	   cout<<c<<endl;
	}
	return 0;
}


