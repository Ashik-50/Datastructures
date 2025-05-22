#include <bits/stdc++.h>
using namespace std;
#define V 4
#define INF 9999
void floydWarshall(int dist[][V]) {
    int i, j, k;
    for (k = 0; k < V; k++) {
        for (i = 0; i < V; i++) {
            for (j = 0; j < V; j++) {
                if (dist[i][j] > (dist[i][k] + dist[k][j])
                    && (dist[k][j] != INF
                        && dist[i][k] != INF))
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
    printSolution(dist);
}
void printSolution(int dist[][V]) {
    cout << "Shortest distances between every pair of vertices:\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if (dist[i][j] == INF)
                cout << "INF" << " ";
            else
                cout << dist[i][j] << "   ";
        }
        cout << endl;
    }
}
int main() {
    int graph[V][V];
    cout << "Enter the " << V << "x" << V << " adjacency matrix (use " << INF << " for no direct path):\n";
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cin >> graph[i][j];
        }
    }
    floydWarshall(graph);
    return 0;
}