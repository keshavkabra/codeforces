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

int main()
{
	int n;
	cin>>n;
	int a[202],l[101],r[101];
	int li=0,ri=0,lu=0,ru=0;
	for(int i=0;i<2*n;i++)
		cin>>a[i];
	qsort (a, 2*n, sizeof(int), compare);
//	l[li++]=a[0];
	for(int i=1;i<2*n;i++)
	{
		if(a[i]==a[i-1])
		{
			l[li++]=a[i-1];
			r[ri++]=a[i];
			i++;
			if(l[li-1]!=l[li-2])
				lu++;
			if(r[li-1]!=r[ri-2])
				ru++;
		}
		else if(li<n)
		{
			l[li++]=a[i];
			if(l[li-1]!=l[li-2])
				lu++;
		}
		else
		{
			r[ri++]=a[i];
			if(r[li-1]!=r[ri-2])
				ru++;
		}
	}
	for(int i=0;i<n;i++)
		cout<<l[i]<<" ";
		cout<<endl<<lu<<" "<<ru;
}
