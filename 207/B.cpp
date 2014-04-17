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
#define SIZE 100100
using namespace std;


int color[SIZE];

int main()
{
	int m,n;
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int a1,a2,a3;
		cin>>a1>>a2>>a3;
		int d1=color[a1]==0;
		int d2=color[a2]==0;
		int d3=color[a3]==0;
		int d=d1+d2+d3;
		if(d==3)
		{
			color[a1]=1;
			color[a2]=2;
			color[a3]=3;			
		}
		else if(d==1)
		{
			if(d1)
			{
				color[a1]=6-color[a2]-color[a3];
			}
			else if(d2)
			{
				color[a2]=6-color[a1]-color[a3];
			}
			else if(d3)
			{
				color[a3]=6-color[a1]-color[a2];
			}
		}
		else if(d==2)
		{
			if(d1 && d2)
			{
				if(color[a3]==1)
				{
					color[a1]=2;color[a2]=3;
				}
				else if(color[a3]==2)
				{
					color[a1]=1;color[a2]=3;
				}
				else
				{
					color[a2]=2;color[a1]=1;
				}
			}
			if(d3 && d2)
			{
				if(color[a1]==1)
				{
					color[a3]=2;color[a2]=3;
				}
				else if(color[a1]==2)
				{
					color[a3]=1;color[a2]=3;
				}
				else
				{
					color[a2]=2;color[a3]=1;
				}
			}
			if(d1 && d3)
			{
				if(color[a2]==1)
				{
					color[a1]=2;color[a3]=3;
				}
				else if(color[a2]==2)
				{
					color[a1]=1;color[a3]=3;
				}
				else
				{
					color[a3]=2;color[a1]=1;
				}
			}
		}
	}

	for(int i=1;i<=n;i++)
		cout<<color[i]<<" ";
}
