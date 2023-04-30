#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;


int n;
int dist[10][10];
bool visited[10];

int tsp(int curr, int cost, int visited_count, int min_cost) {
    if (visited_count == n) {
        // if all nodes have been visited, update the minimum cost if needed
        min_cost = min(min_cost, cost + dist[curr][0]);
        return min_cost;
    }
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            // mark the next node as visited and continue the search
            visited[i] = true;
            min_cost = tsp(i, cost + dist[curr][i], visited_count + 1, min_cost);
            visited[i] = false;
        }
    }
    return min_cost;
}

int main()

 {

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> dist[i][j];
        }
    }
    memset(visited, false, sizeof(visited));
    visited[0] = true;
    int min_cost = tsp(0, 0, 5, INF);
    cout << "Minimum cost: " << min_cost << endl;
    return 0;
}
