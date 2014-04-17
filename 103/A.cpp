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
	int n;
	cin>>n;
	int a[110],max=-1,min=200,max_ind,min_ind;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)
		{
			max=a[i];
			max_ind=i;
		}
		if(a[i]<=min)
		{
			min=a[i];
			min_ind=i;
		}
	}
	int dist;
	dist=max_ind+n-min_ind-1;
	if(max_ind>min_ind)
		dist=dist-1;
	else if(max_ind==min_ind)
		dist=0;
	cout<<dist;
}
