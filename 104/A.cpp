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

bool lucky(int n)
{
	while(n>0)
	{
		if(n%10!=4 || n%10!=7)
			return false;
		else
			n=n/10;
	}
	return true;
}

int main()
{
	int n,flag=0,sum1=0,sum2=0;
	char o[100];
	cin>>n;
	cin>>o;
	for(int i=0;i<n;i++)
	{
		if(!(o[i]=='4' || o[i]=='7'))
		{
			flag=1;
			break;
		}
		if(i<n/2)
			sum1=sum1+o[i]-'0';
		else
			sum2=sum2+o[i]-'0';
	}
	if(sum1!=sum2)
		flag=1;
	if(flag==1)
		cout<<"NO";
	else
		cout<<"YES";
}
