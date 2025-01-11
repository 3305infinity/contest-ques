#include<bits/stdc++.h>
using namespace std;
int main()
{	int t;
	cin>>t;
	int n;
	
	for(int i=0;i<t;i++)
	{  bool ans=true;// dumb ass bitch why are u so dumb shittt yu have to initialise true again na darling 
	   cin>>n;
	   vector<int>v(n);
	   for(int k=0;k<n;k++)
	   {
	   	cin>>v[k];
	   }
	  if(n>1)
	  { 
	   for(int k=1;k<n-1;k++)
	   {  
	     ans=false;
	   	 for(int j=k-1;j>=0;j--)
	     {
	      if(v[k]==( v[j]+1)||v[k]==( v[j]-1))
	      {
	      	ans=true;
	      	break;
		  }
	     }
	   if(ans)
	   {
	   	  ans=true;
	   }
	   else
	   {
	   	cout<<"NO"<<endl;
	   	break;
	   }
	   
	   }
	  }
	   if(ans)
	   {
	   	cout<<"YES"<<endl;
	   }	   
	   }
	   return 0;
	   
	}




