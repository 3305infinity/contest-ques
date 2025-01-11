
#include <bits/stdc++.h>
using namespace std;

int main() {	
    int t;
    cin >> t;
    for (int j = 0; j < t; j++) 
	{	
       int n,a,b,c;
       cin>>n>>a>>b>>c;
       long long sum=a+b+c;
       
       	if(n<=a)
       	cout<<1<<endl;
       	else if(n<=(a+b))
       	cout<<2<<endl;
       	else if(n<=sum)
       	cout<<3<<endl;
	   
	   else
	   {
	   	long long steps=3*(n/sum);
	   	long long rem=n%sum;
	   	
	   	if(n%sum!=0)
	   	{
	   	if(rem<=a)
       	steps=steps+1;
       	else if(rem<=(a+b))
       	steps=steps+2;
       	else 
        steps=steps+3;
		}
		cout<<steps<<endl;
	   }
        
    }
    
    return 0;
}

