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
	int a,b,count=0;
	cin>>a>>b;
	if(a<b)
		cout<<b;
	else
	{
		a++;
		int bc=b,c=0;
		while(bc>0)
		{
			count++;
			bc=bc/10;
		}
		for(int i=0;i<count;i++)
		{
			c=c*10+a%10;
			a=a/10;
		}
		if(c>=b)
			a++;
		for(int i=0;i<count;i++)
			a=a*10;
		cout<<(a+b);
	}
}
