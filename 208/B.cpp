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
	int n;
	cin>>n;
	string s1,s2;
	for(int i=0;i<n;i++)
	{
		string temp;
		cin>>temp;
		s1=s1+temp;
	}
	cin>>s2;
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	int j=0,flag=0;
	int i;
	for(i=0;i<s2.length();i++)
	{
		if(s2[i]>=97 && s2[i]<=122)
		{
			if(s2[i]==s1[j])
			{
				j++;
				if(s1[j]=='\0')
					break;
			}
		}
	}
	if(s1[j]!='\0')
		cout<<"no";
	else
		cout<<"yes";
	//cout<<s2<<endl<<s1;;
}
