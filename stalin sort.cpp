#include<bits/stdc++.h>
using namespace std;
bool increasinglysorted(vector<int>a)
{
	vector<int>temp(a.size());
	for(int i=0;i<a.size();i++)
	{
		temp[i]=a[i];
	}
	sort(a.begin(),a.end());//increasingly sorted
	for(int i=0;i<a.size();i++)
	{
		if(temp[i]!=a[i])
		return false;
	}
	return true;
}
int main()
{	int n;
    int t;
    cin>>t;
    int a,b;
	while(t--)
	{	
	   cin>>n;
	   vector<int>a(n);
	   for(int i=0;i<n;i++)
	   {
	   	  cin>>a[i];
	   }
	   int ind=0;
	   int c=1;int flag=1;
	   // first find first such element that is maxima  
	   for(int i=1;i<n-1;i++)
	   {
	   	  if(a[i]>a[i-1] && a[i]>a[i+1])
	   	  {
	   	      ind=i; flag=0;
			  break;
		  }
		 c++;
	   }
	   if(flag==1)//can be decreasingly sorted or increasingly 
	   {
	   	if(!increasinglysorted(a))
	   	cout<<0<<endl;
	   	else
	   	{
	   		reverse(a.begin(),a.end());
	   	   	for(int i=0;i<n;i++)
	   	   	{
	   	   		if(a[i]!=a[i+1])
	   	   		{
	   	   			cout<<n-i-1<<endl;
	   	   			break;
				  }
		    }
		}
	   	
	   	continue;
	   }
	   for(int i=ind;i<n;i++)
	   {
	   	  	   	  if(a[i]>a[ind] )
	   	  {
	   	      	c++;
		 }
		 
	   }
	   cout<<c<<endl;
	   
	}
	return 0;
}


