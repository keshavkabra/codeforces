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
	int a,x,y;
	cin>>a>>x>>y;
	if(x>=a || x<=-a || y%a==0)
		cout<<"-1";
	else{
	int t=y/a;
	if(t==0)
	{
		if(2*x>=a || 2*x<=-a)
		cout<<"-1";
		else
		cout<<"1";
	
	}
	else if(t%2==1){
		int n=(t+1)/2;
		if(2*x>=a || 2*x<=-a)
		cout<<"-1";
		else
		cout<<3*n-1;
	}
	else{
		int n=t/2;
		if(x>0)
		cout<<3*n+1;
		else if(x<0)
		cout<<3*n;
		else
		cout<<"-1";
	}
}
}
