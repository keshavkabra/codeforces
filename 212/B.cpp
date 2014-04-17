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
	int n;
	cin>>n;
	int m;
	cin>>m;
	int a[3100];
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	int flag=0;
	qsort(a,m,sizeof(int),compare);
	if(a[0]==1 || a[m-1]==n)
		cout<<"NO";
	else
	{
		for(int i=0;i<m-1;i++)
		{
			if(a[i]==a[i+1]-1)
			{
				flag++;
			}
			else
				flag=0;
			if(flag==2)
				break;
		}
		if(flag==0)
			cout<<"YES";
		else
			cout<<"NO";
	}
}
