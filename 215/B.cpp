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

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int t[100100];
int main()
{
	int n,m,a[100100];
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>a[i];
	int count[100100];
//	memset(t,1,100100);
	count[n]=0;
	for(int i=n-1;i>=0;i--)
	{
		if(!t[a[i]])
		{
			count[i]=count[i+1]+(1-t[a[i]]);
			t[a[i]]=1;
		}
		else
			count[i]=count[i+1];
	}
	while(m--)
	{
		int l;
		cin>>l;
		//l--;
		//set<int> sa(a+l,a+n);
		cout << count[l-1] << endl;
	}
}
