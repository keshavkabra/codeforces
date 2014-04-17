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
	int n;
	cin>>n;
	char a[310][310];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	char d=a[0][0];
	char e=a[0][1];
	int flag=0;
	for(int i=0;i<n;i++)
	{	
		for(int j=0;j<n;j++)
		{
			if(i==j || i+j==n-1)
			{
				if(a[i][j]!=d)
				{
					flag=1;
					break;
				}
			}
			else
			{
				if(a[i][j]!=e)
				{
					flag=1;
					break;
				}
			}
		}
		if(flag==1)
			break;
	}
	if(flag==1 || d==e)
		cout<<"NO";
	else
		cout<<"YES";
}
