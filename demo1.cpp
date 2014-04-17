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
  return ( *(char*)a - *(char*)b );
}


int main()
{
	char str[110],str1[110];
	cin>>str;
	int j=0;
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]!='+')
			str1[j++]=str[i];
	}
	//str1[j++]='\n';
	qsort (str1, j, sizeof(char), compare);
	for(int i=0;i<j;i++)
	{	
		cout<<str1[i];
		if(i!=j-1)
			cout<<"+";
	}
	
}
