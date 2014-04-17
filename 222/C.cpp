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
#include<list>
#define f(i,a,n) for(int i=a;i<n;i++)
using namespace std;

char a[510][510];

class Graph
{
	int V;
	list<int> *adj;
public:
	Graph(int V);
	void addEdge(int v,int w);
	void BFS(int s,int k,int n);
};

Graph::Graph(int V)
{
	this->V=V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v,int w)
{
	adj[v].push_back(w);
}

void Graph::BFS(int s,int k,int n)
{
	bool *visited=new bool[V];
	f(i,0,V)
		visited[i]=false;
	list<int> queue;

	visited[s]=true;
	queue.push_back(s);
	list<int>::iterator i;
	while(!queue.empty() && k>0 )
	{
		s=queue.front();
		a[s/n][s%n-1]=',';
		k--;
		queue.pop_front();
		for(i=adj[s].begin();i!=adj[s].end();++i)
		{
			if(!visited[*i])
			{
				visited[*i]=true;
				queue.push_back(*i);
			}
		}
	}
}

int node(int i,int j,int n)
{
	return n*i+j+1;
}

int main()
{
	int n,m,k;
	cin>>n>>m>>k;
//	char a[510][510];
	Graph G(m*n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	int start_i=-1,start_j=-1;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]=='.')
			{
				if(start_i==-1)
				{
					start_i=i;
					start_j=j;
				}
				if(i>=1 && a[i-1][j]=='.')
					G.addEdge(node(i,j,n),node(i-1,j,n));
				if(i<n-1 && a[i+1][j]=='.')
					G.addEdge(node(i,j,n),node(i+1,j,n));
				if(j>=1 && a[i][j-1]=='.')
					G.addEdge(node(i,j,n),node(i,j-1,n));
				if(j<m-1 && a[i][j+1]=='.')
					G.addEdge(node(i,j,n),node(i,j+1,n));
			}	
		}
	}
	G.BFS(node(start_i,start_j,n),m*n-k,n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(a[i][j]==',')
				cout<<".";
			else if(a[i][j]=='.')
				cout<<"X";
			else
				cout<<a[i][j];
		}
		cout<<endl;
	}
	
	
	
	
}
