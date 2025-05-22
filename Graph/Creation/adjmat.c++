#include <iostream>
#include <vector>

using namespace std;

class GraphMatrix {
private:
    int vertices;
    vector<vector<int>> adjMatrix;

public:
    GraphMatrix(int V) {
        vertices = V;
        adjMatrix.resize(V, vector<int>(V, 0)); 
    }

    void addEdge(int u, int v, int weight, bool isDirected) {
        adjMatrix[u][v] = weight;
        if (!isDirected) {
            adjMatrix[v][u] = weight; 
        }
    }

    void display() {
        cout << "\nAdjacency Matrix:\n";
        for (int i = 0; i < vertices; i++) {
            for (int j = 0; j < vertices; j++) {
                cout << adjMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int V, E;
    bool isDirected, isWeighted;

    cout << "Enter number of vertices: ";
    cin >> V;
    cout << "Enter number of edges: ";
    cin >> E;
    
    cout << "Is the graph directed? (1 for Yes, 0 for No): ";
    cin >> isDirected;
    
    cout << "Is the graph weighted? (1 for Yes, 0 for No): ";
    cin >> isWeighted;

    GraphMatrix g(V);

    cout << "Enter edges (Format: u v weight):\n";
    for (int i = 0; i < E; i++) {
        int u, v, weight = 1;
        cin >> u >> v;
        if (isWeighted) {
            cin >> weight;
        }
        g.addEdge(u, v, weight, isDirected);
    }

    g.display();

    return 0;
}


// Enter number of vertices: 4  
// Enter number of edges: 5  
// Is the graph directed? (1 for Yes, 0 for No): 0  
// Is the graph weighted? (1 for Yes, 0 for No): 1  
// Enter edges (Format: u v weight):
// 0 1 5  
// 0 2 3  
// 1 2 2  
// 1 3 8  
// 2 3 4  
