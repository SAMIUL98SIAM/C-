#include <bits/stdc++.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int cost[10][10],i,j,k,Que[10],front,rare,Ver,visit[10],visited[10],N;
int main()
{
    int Edge ;
    cout << "ENTER THE NUMBER OF VERTICES: " ;
    cin >> N ;
    cout << "ENTER THE NUMBER OF EDGES: " ;
    cin >> Edge ;
    cout << "EDGES ARE: \n" ;
    for(int k=1;k<=Edge;k++)
    {
        cin >> i >> j ;
    }
    cout << "ENTER THE VERTICES FROM TO TRAVERSE FROM: " ;
    cin >> Ver ;
    cout << "BFS ORDER OF VERTICES: " ;
    cout << Ver << " " ;
    visited[Ver] = 1 ;
    k = 1 ;
    while(k<N)
    {
        for(j=1;j<=N;j++)
        {
            if(visit[j]!=1 && visited[j]!=1)
            {
                visit[j] = 1 ;
                Que[rare++] = j ;
            }
        }
        Ver = Que[front++] ;
        cout << Ver << " ";
        k++;
        visit[Ver] = 0 ;
        visited[Ver] = 1 ;
    }
}
