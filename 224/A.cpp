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
	string s,t;
	cin>>s;
	cin>>t;
	int lc,rc,mc;
	mc=s.find('|');
	rc=mc;
	lc=s.size()-mc-1;
	if(rc>lc)
	{
		int d=rc-lc;
		int tl=t.size();
		if(d%2==tl%2 && d<=tl)
		{
			for(int i=0;i<mc;i++)
				cout<<s[i];
			for(int i=0;i<(tl-d)/2;i++)
				cout<<t[i];
			cout<<"|";
			for(int i=mc+1;s[i]!='\0';i++)
				cout<<s[i];
			for(int i=(tl-d)/2;t[i]!='\0';i++)
				cout<<t[i];
		}
		else
			cout<<"Impossible";
	}
	else
	{
		int d=lc-rc;
		int tl=t.size();
		if(d%2==tl%2 && d<=tl)
		{
			for(int i=0;i<mc;i++)
				cout<<s[i];
			for(int i=0;i<d+(tl-d)/2;i++)
				cout<<t[i];
			cout<<"|";
			for(int i=mc+1;s[i]!='\0';i++)
				cout<<s[i];
			for(int i=d+(tl-d)/2;t[i]!='\0';i++)
				cout<<t[i];
		}
		else
			cout<<"Impossible";
	}
	
}
