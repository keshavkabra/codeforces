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
	int n,k;
	cin>>n>>k;
	int a[300100];
	f(i,0,n)
		cin>>a[i];
	qsort(a,n,sizeof(int),compare);
	int min=a[0];
//	cout<<min<<endl;
	for(int i=0;i<=k;i++)
	{
		int m=min-i,flag=0;
		for(int j=0;j<n;j++)
		{
			if(a[j]%m>k)
			{	
				flag=1;
				break;
			
			}
		}
		if(flag==0)
			{
				cout<<m;
				break;
			}
	}
}
