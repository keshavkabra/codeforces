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
	char S[1000100];
	cin>>S;
	int c,flag,sec=0;
	
	
	while(1)
	{
		flag=0;
		for(int i=0;S[i]!='\0';i++)
		{
			if(S[i]=='M' && S[i+1]=='F')
			{	
				char temp=S[i];
				S[i]=S[i+1];
				S[i+1]=temp;
				i++;
				flag=1;
			}
		}
		sec++;
		if(flag==0)
			break;
	}
	sec--;
	cout<<sec;
}
