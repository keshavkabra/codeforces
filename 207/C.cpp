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
	int m;
	cin>>m;
	int c[105],sum=0,sumx=0,xi,x,y,flag=0;
	
	for(int i=0;i<m;i++)
	{
		cin>>c[i];
		sum=sum+c[i];
	}
	cin>>x>>y;
	for(int i=0;i<m;i++)
	{
		sumx=sumx+c[i];
		if(sumx>=x && sum-sumx<=y && sum-sumx>0)
		{
			xi=i;
			flag=1;
			break;
		}
	}
	xi++;
	if(flag==1)
		cout<<++xi;
	else
		cout<<"0";
}
