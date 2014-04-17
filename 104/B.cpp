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
#define SIZE 100100
using namespace std;

int main()
{
	char a[SIZE],b[SIZE];
	cin>>a>>b;
	int c=0,d=0;
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]=='4' && b[i]=='7')
			c++;
		if(b[i]=='4' && a[i]=='7')
			d++;
	}
	if(c>=d)
		cout<<c;
	else
		cout<<d;
}
