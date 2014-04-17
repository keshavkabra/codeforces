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
	int a,b;
	cin>>a>>b;
	int c=0,d=0,e=0;
	for(int x=1;x<=6;x++)
		if(abs(a-x)>abs(b-x))
			e++;
		else if(abs(a-x)<abs(b-x))
			c++;
		else d++;
	
	cout<<c<<" "<<d<<" "<<e;
}
