#include<cstdio>
#include<iostream>
#include<queue>
#include<vector>
#include<map>
#include<utility>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<set>
#include<string>
#include<numeric>
#define f(i,a,n) for(int i=a;i<n;i++)
using namespace std;



int main()
{
	int a[]={1,2,3,4,1,2,3,4,5,6,7,8,5,6,7,8,9,10,11,12,9,10,11,12,13,14,15,16,13,14,15,16,1,2,3,4,1,2,3,4,5,6,7,8,5,6,7,8,9,10,11,12,9,10,11,12,13,14,15,16,13,14,15,16};
	int t;
	cin>>t;
	while(t--)
	{
		char c;
		int k[2],ki=0,b[64],bi=0;
		for(int i=0;i<8;i++)
			for(int j=0;j<8;j++)
			{
				cin>>c;
				if(c=='K')
					k[ki++]=8*i+j;
				if(c=='#')
					b[bi++]=8*i+j;
			}
		if(a[k[0]]==a[k[1]])
		{
			int flag=0;
			for(int i=0;i<64;i++)
			{
				if(a[i]==a[k[0]])
				{
					if(bi==0)
						flag=1;
					else
					for(int j=0;j<bi;j++)
					{
						if(b[j]!=i)
						{
							flag=1;
							break;
						}
					}
				if(flag==1)
				break;
				}
			}
			if(flag==1)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else
			cout<<"NO"<<endl;
		char c1;
		if(t>0)
		cin>>c1;
	}
}
