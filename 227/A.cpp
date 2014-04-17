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
char s[5],t[5];
	char p[5];
int main()
{
	
	cin>>s>>t;
	if(t[4]>=s[4])
	{
		cout<<"HERE";
		p[4]=-t[4]+s[4]+10;
		s[3]--;
	}
	else
	{
		cout<<"HERE";
		p[4]=s[4]-t[4];
	}

	if(t[3]>=s[3])
	{
		p[3]=-t[3]+s[3]+10;
		s[1]--;
	}
	else
	{
		p[3]=s[3]-t[3];
	}

	if(t[1]>=s[1])
	{
		p[1]=-t[1]+s[1]+10;
		s[0]--;
	}
	else
	{
		p[1]=s[1]-t[1];
	}
	
	if(t[0]>=s[0])
	{
		p[0]=-t[0]+s[0]+10;
//		s[0]--;
	}
	else
	{
		p[0]=s[0]-t[0];
	}
	
	p[2]=':';
	p[4]=0;
	
	cout<<p;
}
