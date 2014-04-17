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
	int r1,r2,c1,c2,d1,d2;
	int a,b,c,d,flag=0;
	cin>>r1>>r2>>c1>>c2>>d1>>d2;
	for(a=1;a<=9;a++){
	for(b=1;b<=9;b++){
	for(c=1;c<=9;c++){
	for(d=1;d<=9;d++)
	{
		if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
		{
			if(a+b==r1)
			if(a+c==c1)
			if(a+d==d1)
			if(b+c==d2)
			if(b+d==c2)
			if(c+d==r2){
				flag=1;
				break;
			}
		}
	}
	if(flag==1)	break;}
	if(flag==1)	break;}
	if(flag==1)	break;}
		
	
	if(flag==0)
		cout<<"-1";
	else
		cout<<a<<" "<<b<<endl<<c<<" "<<d<<endl;
	/*
	a=(c1+r1-d2);
	c=(c1-r1+d2);
	b=(r1-d1+c2);
	d=(-r1+d1+c2);
	if(a%2==0 && b%2==0 && c%2==0 && d%2==0)
	{a=a/2;
	b=b/2;
	c=c/2;
	d=d/2;
	if(a>=1 && a<=9 && b>=1 && b<=9 && c>=1 && c<=9 && d>=1 && d<=9 && a!=b && a!=c && a!=d && c!=b && d!=b && c!=d)
	{
		cout<<a<<" "<<b<<endl<<c<<" "<<d;
	}
	else
		cout<<"-1";
	}
	else cout<<"-1";*/
}
