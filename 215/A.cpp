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

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}


int main()
{
	int n,d,m,a[110],sum=0,s1=0,cost=0;
	cin>>n>>d;
	for(int i=0;i<n;i++)
	{
			cin>>a[i];
			sum=sum+a[i];
	}
	cin>>m;
	qsort(a+2,n-4,sizeof(int),compare);
/*	if(m<=n)
	{
		for(int i=0;i<m;i++)
			cost=cost+a[i];
	}
	else
	{
		cost=sum-(m-n)*d;
	}
	cout<<cost;
*/
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";

}
