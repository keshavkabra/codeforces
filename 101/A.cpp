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
	//char f[105],s[105],t[105];
	string f,s,t;
	cin>>f>>s>>t;
	f.append(s);
	std::sort(f.begin(),f.end());
	std::sort(t.begin(),t.end());
	if(!f.compare(t))
		cout<<"YES";
	else
		cout<<"NO";
	
	}
