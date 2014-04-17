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

	int ri[27];
	int si[27];

bool check(int *r,int *s,int len)
{
	//cout<<s[24]<<"  "<<r[24]<<" "<<s[2]<<"  "<<r[2]<<endl;
	for(int i=1;i<=len;i++)
		if(r[i]<s[i])
			return false;
	return true;
	
}

int main()
{
	string s,r;
	cin>>s>>r;
	int count=0;
	if(r.length()<=s.length()){
	for(int i=0;i<r.length();i++)
		if(r[i]!='?')
			ri[r[i]-'a'+1]++;
	for(int i=0;i<r.length();i++)
			if(s[i]!='?')
				si[s[i]-'a'+1]++;
	for(int j=0;j<=s.length()-r.length();j++)
	{
		if(j>0)
		{
			if(s[j-1]!='?')
				si[s[j-1]-'a'+1]--;
			if(s[j+r.length()-1]!='?')	
				si[s[j+r.length()-1]-'a'+1]++;
		}
		
		if(check(ri,si,26))
			count++;
	}
	cout<<count;}
	else cout<<"0";
}
