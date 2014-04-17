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
	string s;
	cin>>s;
	int i=0,count=0,l=0;
	int n=s.length();
	while(l+2<n)
	{
		if(s.substr(l,4)=="bear")
		{
			int t=s.find_last_of('b');
			if(t==string::npos)
				t=0;
			count=count+(l+1-t)*(n-l-3);
			l=l+4;
		}
		else
		l++;
	}
	cout<<count;
}
