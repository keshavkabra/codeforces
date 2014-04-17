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
	int k,d;
	cin>>k>>d;
	char a[1050];
	int i=1;
	if(d>0)
	{
		a[0]='1';
//		int i=1;
		while(i<k-1){
			a[i]='0';
			i++;}
		a[i]='0'+d-1;
		
	}
	else
		a[0]='0';
	//a[++i]='\0';	
	cout<<a;
}
