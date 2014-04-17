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

int c[100100],d[100100];
int main()
{
	int n;
	int a[100100],b[100100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	
	for(int k=0;2*k<=n;k++)
	{
		int ai=k,bi=k;
		if(k>0){
		c[k-1]=1;d[k-1]=1;
		}
		for(int l=0;l<n-2*k;l++)
		{
			if(a[ai]<b[bi])
			{
				c[ai]=1;
				ai++;
			}
			else
			{
				d[bi]=1;
				bi++;
			}
		}
	}
	for(int i=0;i<n;i++)
		cout<<c[i];
	cout<<endl;
	for(int i=0;i<n;i++)
		cout<<d[i];
}
