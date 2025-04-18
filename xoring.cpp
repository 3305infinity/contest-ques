#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) 
	{
		int x;
		cin>>x;
		int flag=0;
		
		if((x&(x-1))==0 || ((x+1)&(x))==0)
		cout<<-1<<endl;	
		else
		{
			for(int y=1;y<x;y++)
			{
				int r=y^x;
				if(r+y>x && y+x>r && x+y>r)
				{
					cout<<y<<endl;
					break;
				}
			}
		}
    }
    return 0;
}

