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

char s[5],d[5];

int main(int argc, char **argv)
{
	cin>>s>>d;
	cout<<max(abs(s[0]-d[0]),abs(s[1]-d[1]))<<endl;
	while(!(s[1]==d[1] && s[0]==d[0]))
	{	
		//cout<<endl<<s[0]<<" "<<s[1]<<endl;
		if(s[0]<d[0] && s[1]<d[1])
		{
			cout<<"RU"<<endl;
			s[0]+=1;
			s[1]+=1;
		}
		else if(s[0]<d[0] && s[1]>d[1])
		{
			cout<<"RD"<<endl;
			s[0]+=1;
			s[1]-=1;
		}
		else if(s[0]>d[0] && s[1]>d[1])
		{
			cout<<"LD"<<endl;
			s[0]-=1;
			s[1]-=1;
		}
		else if(s[0]>d[0] && s[1]<d[1])
		{
			cout<<"LU"<<endl;
			s[0]-=1;
			s[1]+=1;
		}
		else if((s[0]==d[0]) && (s[1]<d[1]))
		{
			cout<<"U"<<endl;
			s[1]+=1;
		}
		else if(s[0]==d[0] && s[1]>d[1])
		{
			cout<<"D"<<endl;
			s[1]-=1;
		}
		else if(s[0]>d[0] && s[1]==d[1])
		{
			cout<<"L"<<endl;
			s[0]-=1;
		}
		else //(s[0]<d[0] && s[1]==d[1])
		{
			cout<<"R"<<endl;
			s[0]+=1;
		}

	}
}
