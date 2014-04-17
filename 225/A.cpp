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
	int n,c;
	cin>>n>>c;
	int a[110];
	int max=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(i>0)
		{
			if(max<a[i-1]-a[i])
				max=a[i-1]-a[i];
		}
	}
	if(max==0)
		cout<<"0";
	else
		cout<<max-c;
}
