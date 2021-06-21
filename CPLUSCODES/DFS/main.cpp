/*#include <bits/stdc++.h>
#include<conio.h>
using namespace std;
int cost[10][10],N,i,j,k,Ver,Stck[10],top,visit[10],visited[10] ;
int main()
{
    int Edge;
    cout << "ENTER THE NUMBER OF VERTICES: " ;
    cin >> N ;
    cout << "ENTER THE NUMBER OF EDGES: " ;
    cin >> Edge ;
    cout << "EDGES ARE: \n" ;
    for(k=1;k<=Edge;k++)
    {
        cin >> i >> j ;
       // cost[i][j] = 1;
    }
    cout << "ENTER THE VERTEX TRAVERSE FROM: " ;
    cin >> Ver ;
    cout << "DFS ORDER OF VERTICES: " ;
    cout << Ver << " " ;
    visited[Ver] = 1 ;
    k = 1 ;
    while(k<N)
    {
        for(j=N;j>=1;j--)
        {
            if(visited[j]!=1 && visit[j]!=1)
            {
                visit[j] = 1 ;
                Stck[top] = j ;
                top++;
            }
        }
        Ver = Stck[--top] ;
        cout << Ver << " ";
        k++;
        visit[Ver] = 0 ;
        visited[Ver] = 1 ;
    }
}*/
#include<bits/stdc++.h>
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int cost[10][10],i,j,k,n,stk[10],top,v,visit[10],visited[10];
int main()
{
    int m;
    //clrscr();
    cout <<"Enter no of vertices:";
    cin >> n;
    cout <<"Enter no of edges:";
    cin >> m;
    cout <<"\nEDGES \n";
    for(k=1; k<=m; k++)
    {
        cin >>i>>j;
        cost[i][j]=1;
    }
    cout <<"Enter initial vertex to traverse from:";
    cin >>v;
    cout <<"DFS ORDER OF VISITED VERTICES:";
    cout << v <<" ";
    visited[v]=1;
    k=1;
    while(k<n)
    {
        for(j=n; j>=1; j--)
            if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
            {
                visit[j]=1;
                stk[top]=j;
                top++;
            }
        v=stk[--top];
        cout<<v << " ";
        k++;
        visit[v]=0;
        visited[v]=1;
    }
    getch();
    return 0;
}
