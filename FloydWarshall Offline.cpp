#include <bits/stdc++.h>
using namespace std;
#define V 4
#define INF 99999

void printSolution(int dist[][V]);

void FloydWarshall(int dist[][V])
{

      int i, j, k;

      for (k = 0; k < V; k++)
     {

         for (i = 0; i < V; i++)
        {

        for (j = 0; j < V; j++)
        {

        if (dist[i][j] > (dist[i][k] + dist[k][j])
        && (dist[i][k] != INF
        && dist[k][j] != INF))
        dist[i][j] = dist[i][k] + dist[k][j];


            }
        }
    }

    printSolution(dist);
}

void printSolution(int dist[][V])
{
    cout << "Enter the following Matrix to find the shortest path \n";
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (dist[i][j] == INF)
                cout << "INF"<< " ";
            else
                cout << dist[i][j] << "   ";
        }
        cout << endl;
    }

}
int main()
{

    int graph[V][V] = { { 0, 4, INF, 7 },
                        { 1, INF, 3, INF },
                        { 1, INF, 0, 10 },
                        { INF, 0, INF, 0 }
    };

    FloydWarshall(graph);
    return 0;
}
