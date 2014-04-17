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
	int n,a[100100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int l=0,r=2,len=2,maxlen=2;
	for(int i=2;i<n;i++)
	{
		if(a[i]==a[i-1]+a[i-2])
		{
			r++;
			len++;
		}
		else
		{
			l=i-1;
			r=i+1;
			len=2;
		}
		if(maxlen<len)
			maxlen=len;
	}
	cout<<maxlen;
}
