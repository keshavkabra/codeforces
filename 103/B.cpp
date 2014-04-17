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

float dist(int x1,int x2,int y1,int y2)
{
	return pow(pow(x1-x2,2)+pow(y1-y2,2),0.5);
}

int main()
{
	int xa,xb,ya,yb;
	cin>>xa>>ya>>xb>>yb;
	int n,blan=0;
	cin>>n;
	if(xa>xb)
	{
		int temp=xa;
		xa=xb;
		xb=temp;
	}
	if(ya>yb)
	{
		int temp=ya;
		ya=yb;
		yb=temp;
	}
	int count=0;
	
	int x[1010],y[1010],r[1010];
	for(int j=0;j<n;j++)
			cin>>x[j]>>y[j]>>r[j];
	
	for(int i=xa;i<=xb;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(dist(i,x[j],ya,y[j])>r[j] && j==n-1)
			{
				blan++;
			}	
			else break;
		}
		for(int j=0;j<n;j++)
		{
			if(dist(i,x[j],yb,y[j])>r[j] && j==n-1)
			{
				blan++;
			}	
			else break;
		}
	}
	for(int i=ya+1;i<yb;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(dist(xa,x[j],i,y[j])>r[j] && j==n-1)
			{
				blan++;
			}
			else break;	
		}
		for(int j=0;j<n;j++)
		{
			if(dist(xb,x[j],i,y[j])>r[j])
			{
				blan++;
			}	
			else break;
		}
	}
	cout<<blan;
}
