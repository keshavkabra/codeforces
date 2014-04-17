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
#define ll long long
using namespace std;

int main()
{
	int b,x,w;
	ll a,c;
	cin>>a>>b>>w>>x>>c;
	int s=0;
	while(c>a)
	{
		s++;
//		cout<<s;
		c--;
		if(b>=x)
		{
			b=b-x;
		}
		else
		{
			a--;
			b=w-x+b;
		}
	}
	cout<<s;
}
