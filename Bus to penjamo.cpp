#include<bits/stdc++.h>
using namespace std;
int main()
{	
    int t;
	cin>>t;
	int n,rows;
	for(int j=0;j<t;j++)
	{	
	    cin>>n;
	    cin>>rows;
	    vector<int>v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    int happy=0;
	    int mr=0;// mixed rows
	    int pr=0;//pure rows
	    int er=0;//singlely empty rows
	    for(int k=0;k<n;k++)
	    {
	    	if(v[k]==1)
	    	{
	    		er++;
			}
			else if(v[k]>=2)
			{
				int f=v[k]/2;// that many rows will be filled together proeperly 
				pr+=f;
				if(v[k]%2!=0)
				er++;
			}
		}
		if(pr+er>rows)
		{
			mr=pr+er-rows;
		    er=er-2*mr;   
		}
		happy=pr*2+er;
	   	cout<<happy<<endl;
	}		
	return 0;
}


