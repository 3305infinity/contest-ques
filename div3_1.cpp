#include<bits/stdc++.h>
#include <string>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	int n;
	string s="";
	for(int i=0;i<t;i++)
	{	
	   cin>>s;
	   
	   if(s.length()>=3)
	   { 
	   int a=stoi(s.substr(0,2));
	   int b=stoi(s.substr(2));
	   if(a==10 && b>=2 && s[2]!='0')
	   {
	   	cout<<"YES"<<endl;
	   	continue;
	   }
	   else
	   {
	   	cout<<"NO"<<endl;
	   	continue;
	   }
       }
	   else
	   {
	   	cout<<"NO"<<endl;
	   }	   
    }
	return 0;
}





