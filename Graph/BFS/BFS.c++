// It implements an undirected graph using an adjacency list and performs Breadth-First Search (BFS)
#include <bits/stdc++.h>

using namespace std;

class Graph {
    int vertices;
    vector<vector<int>> adjlist;

public:
    Graph(int vertices) {
        this->vertices = vertices;
        adjlist.resize(vertices);
    }

    void addEdge(int src, int des) {
        adjlist[src].push_back(des);
        adjlist[des].push_back(src); 
    }

    void bfs(int start) {
        vector<bool> visited(vertices, false);
        queue<int> q;
        
        visited[start] = true;
        q.push(start);

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << endl;

            for (int neighbor : adjlist[node]) {
                if (!visited[neighbor]) {
                    q.push(neighbor);
                    visited[neighbor] = true;
                }
            }
        }
    }
};
int main() {
    int V, E;
    cin >> V >> E;
    
    Graph g(V);
    for (int i = 0; i < E; i++) {
        int src, des;
        cin >> src >> des;
        g.addEdge(src, des);
    }

    int start;
    cin >> start;
    g.bfs(start);

    return 0;
}
