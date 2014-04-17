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
	int n,no0,no1,no2,no3,no4;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int choice,cost;
		cin>>choice;
		switch(choice)
		{
			case 0:
				no0++;
			break;
			
			case 1:
				no1++;
			break;
			
			case 2:
				no2++;
			break;
			
			case 3:
				no3++;
			break;
			
			case 4:
				no4++;
			break;
		}
		if(no1==0 && no2==0)
			cout<<"0";
		else{
			if(no2>=no1)
			{
				cost=no1;
				no1=0;
				no2=no2-no1;
				no3=no3+no1;
			}
			else
			{
				no2=0;
				no1=no1-no2;
				no3=no3+no2;
			}
			if(no1==0 && no2==0)
			cout<<"0";
		else{
			if(no1==0)
			{
				if(no2>=no1)
			{
				cost=no1;
				no1=0;
				no2=no2-no1;
				no3=no3+no1;
			}
			else
			{
				no2=0;
				no1=no1-no2;
				no3=no3+no2;
			}
			}
			else
			{
				
			}
		}
		}
	}
}
