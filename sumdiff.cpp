#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    while(t--)
    {
    	long long x,y;
    	cin>>x>>y;
    	long long sumdiff=y-x;
    	if (sumdiff == 1 || sumdiff == -8 || (x % 9 == 0 && y == 1)) 
		{
            cout << "Yes" << endl;
        } 
        else if(x>y && (x-y)%9==8 )
        {
            cout << "Yes" << endl;
        }
		else 
		{
            cout << "No" << endl;
        }		
	}
    
    

    return 0;
}
