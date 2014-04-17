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
	int x[105],y[105],sumx=0,sumy=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x[i];
		sumx=sumx+x[i];
			cin>>y[i];
		sumy=sumy+y[i];
	}
	int count=0;
	int flag=0;
	if(sumx%2==0 && sumy%2==0)
		cout<<"0";
	else if((sumx+sumy)%2!=0)
		cout<<"-1";
	else
	{
		while(1)
		{
			for(int i=0;i<n;i++)
			{
					if(x[i]%2==0 && y[i]%2!=0)
					{
						int temp=x[i];
						x[i]=y[i];
						y[i]=temp;
						sumx=sumx-x[i]+y[i];
						sumy=sumy+x[i]-y[i];
						count++;
					}
					else if(y[i]%2==0 && x[i]%2!=0)
					{
						int temp=x[i];
						x[i]=y[i];
						y[i]=temp;
						sumx=sumx-x[i]+y[i];
						sumy=sumy+x[i]-y[i];
						count++;
					}
				if(sumx%2==0 && sumy%2==0)
				{
					flag=1;
					break;
				}
			}
				break;
		}
		if(flag==1)
			cout<<count;
		else
			cout<<"-1";
}
}
