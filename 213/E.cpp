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

bool good(int a,int k)
{
	int flag=0,m;
	m=k*(k+1)/2;
	while(a>0)
	{
		int temp=a%10;
		if(temp==0)
			flag=1;
		else
			m=m-temp;
		a=a/10;
	}
	if(m==0 && flag==1)
	return true;
	else
	return false;
}

int main()
{
	int n,k,count=0;;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		if(good(a,k))
			count++;
	}
	cout<<count;
}
