
#include <bits/stdc++.h>
using namespace std;

int main() {	
    int t;
    cin >> t;
    for (int j = 0; j < t; j++) 
	{	
       int n;
       cin>>n;
       vector<int>a(n);
       vector<int>b(n);
       for(int i=0;i<n;i++)
       cin>>a[i];
       for(int i=0;i<n;i++)
       cin>>b[i];
       
       for(int i=0;i<n;i++)
       {
       	    if(i!=n-1)
       	    {
       		a[i]=a[i]-b[i+1];
		    }
		    
	   }
        int sum=0;
        for(int i=0;i<n;i++)
        {
        	if(a[i]>0)
        	sum=sum+a[i];
		}
		cout<<sum<<endl;
        
    }
    
    return 0;
}

