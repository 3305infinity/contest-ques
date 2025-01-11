
#include <bits/stdc++.h>
using namespace std;

int main() {	
    int t;
    cin >> t;
    for (int j = 0; j < t; j++) 
	{	
       int n,m,k;
       cin>>n>>m>>k;
       vector<int>mv(m);
       vector<int>kv(n);
//       unordered_map<int,int>mapy;
       map<int,int>mapy;
       for(int i=0;i<m;i++)
       {
       	cin>>mv[i];
       	
	   }
	   // he knows these answers 
       for(int i=0;i<k;i++)
       {
       	cin>>kv[i];
       	mapy[kv[i]]++;
	   }
       if(k==n)
       {
       	for(int i=0;i<m;i++)
       	cout<<1;
       	cout<<endl;
       	continue;
	   }
       if(k==n-1)
       {
       	for(int i=0;i<m;i++)
          {
		  	if(mapy.find(mv[i])!=mapy.end())// thar means not found
		  	{
		  	 cout<<0;
			  }
			 else
			 cout<<1;	  
	      }
	      cout<<endl;
	   }
	   else
	   {
	   	for(int i=0;i<m;i++)
	   	{
	   		cout<<0;
	    }
		   cout<<endl;
	   }
        
    }
    
    return 0;
}

