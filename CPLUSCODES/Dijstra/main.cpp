//Dijkstra Code
#include<bits/stdc++.h>
#include<climits>
using namespace std;
#define V 7

int minKey(int key[],bool spSet[])
{
    int min = INT_MAX,min_index ;
    for(int i=0;i<V;i++)
    {
        if(spSet[i]==false && min>key[i])
        {
            min = key[i],min_index=i;
        }
    }
    return min_index ;
}

void dijkstra(int graph[V][V],int src)
{
    int key[V] ;
    bool spSet[V] ;
    for(int i=0;i<V;i++)
    {
        key[i] = INT_MAX , spSet[i] = false ;
    }
    key[src] = 0 ;
    for(int c=0;c<V;c++)
    {
        int u = minKey(key,spSet);
        spSet[u] = true ;
        for(int v=0;v<V;v++)
        {
            if(!spSet[v] && graph[u][v] && key[v]>key[u]+graph[u][v])
            {
                key[v] = graph[u][v] + key[u] ;
            }
        }
    }
    cout << "VERTEX\t\tEDGES" << endl;
    for(int i=0;i<V;i++)
    {
        char c = 65+i;
        cout << c << "\t\t" << key[i] << endl ;
    }
}

int main()
{
    int graph[V][V] =  {{0,5,3,0,0,0,0},
                        {0,0,2,0,3,0,1},
                        {0,0,0,7,7,0,0},
                        {0,0,0,0,0,6,0},
                        {0,0,0,2,0,1,0},
                        {0,0,0,0,0,0,0},
                        {0,0,0,0,1,0,0}};

            dijkstra(graph,0) ;
}


