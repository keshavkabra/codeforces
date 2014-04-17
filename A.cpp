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

int lcm(int a,int b){
  
    int temp = a;

    while(1){
         if(temp % b == 0 && temp % a == 0)
             break;
         temp++;
    }

   return temp;
}


int main()
{
	int a,b;
	long int x,y;
	cin>>x>>y>>a>>b;;
	cout<<lcm(x,y)<<endl;
	cout<<floor((b-a+1)/lcm(x,y));
}
