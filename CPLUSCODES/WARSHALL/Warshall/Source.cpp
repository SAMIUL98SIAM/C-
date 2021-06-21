#include<iostream>
using namespace std;
#define V 4 
#define INF 99999
void printWarshall(int dist[][V])
{
	for (int i = 0; i < V; i++)
	{
		for (int j = 0; j < V; j++)
		{
			if (dist[i][j] == INF)
			{
				cout << "INF" << " ";
			}
			else
			{
				cout << dist[i][j] << "   ";
			}
		}
		cout << endl;
	}
}

void Warshall(int graph[][V])
{
	int dist[V][V];
	for (int i = 0; i < V; i++)
	{
		for (int j = 0; j < V; j++)
		{
			dist[i][j] = graph[i][j];
		}
	}
	for (int k = 0; k < V; k++)
	{
		for (int i = 0; i < V; i++)
		{
			for (int j = 0; j < V; j++)
			{
				if (dist[i][j] > dist[i][k] + dist[k][j])
				{
					dist[i][j] = dist[i][k] + dist[k][j];
				}
			}
		}
	}
	printWarshall(dist);
}


int main()
{
	int graph[V][V] = { {0, 5, INF, 10},
						{INF, 0, 3, INF},
						{INF, INF, 0, 1},
						{INF, INF, INF, 0}
	};

	// Print the solution
	Warshall(graph);
	return 0;
}
