#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false;    
    if (n <= 3) return true;     
    if (n % 2 == 0 || n % 3 == 0) return false; 
    for (int i =2; i * i <= n; i ++) {
        if (n % i == 0 )
            return false;
    }
    return true;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n,k;
    	cin>>n>>k;
		if(n%2==0)
		{
			cout<<"NO"<<endl;
			continue;
	    }	
	    else if(k==2 && n==1)
	    {
	    	cout<<"YES"<<endl;
			continue;
		}
		else if(k==1 )
		{
			if(isPrime(n))
			cout<<"YES"<<endl;
			else
			cout<<"NO"<<endl;
		}
		else if(k>1)
		{
			cout<<"NO"<<endl;
		}
	} 
}

