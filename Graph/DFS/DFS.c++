// It implements an undirected graph using an adjacency list and performs Depth-First Search (DFS)
#include <iostream>
#include <vector>

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
        adjlist[des].push_back(src); // Undirected Graph
    }

    void dfsHelper(int node, vector<bool> &visited) {
        visited[node] = true;
        cout << node << endl; // Print the current node

        for (int neighbor : adjlist[node]) {
            if (!visited[neighbor]) {
                dfsHelper(neighbor, visited);
            }
        }
    }

    void dfs(int start) {
        vector<bool> visited(vertices, false);
        dfsHelper(start, visited);
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
    g.dfs(start);

    return 0;
}