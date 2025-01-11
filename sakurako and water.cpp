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
	   
	   int a[n][n];
	   for(int i=0;i<n;i++)
	   {
	   	  for(int j=0;j<n;j++)
	   	  {
	   	    cin>>a[i][j];	
		  }
	   }
	   int row=0,col=0,p=0,q=0;int sum=0;int mini=INT_MAX;
	   //first iterate columns
	    while(col<n)
	      {
	   	  p=0;
	   	  q=col;
	   	  mini=INT_MAX;
	   	  while(p<n && q<n)
	   	  {
	   	          mini=min(mini,a[p][q]); 
				  p++;
				  q++;	
		  }
		  if(mini<0)
		  sum=sum+mini;
		  col++;
	      }	
	      row++;col=0;
	      while(row<n)
	      {
	      	p=row;
	   	    q=0;
	   	  mini=INT_MAX;
	   	  while(p<n && q<n)
	   	  {
	   	          mini=min(mini,a[p][q]); 
				  p++;
				  q++;	
		  }
		  if(mini<0)
		  sum=sum+mini;
		  row++;
		  }
	   	   
   	   cout<<abs(sum)<<endl;
	}
	return 0;
}


