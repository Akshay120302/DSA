#include <iostream>
#include <climits>
using namespace std;

#define V 4

void printSolution(int reach[][V]);

void transitiveClosure(int graph[][V]) {
    int reach[V][V];

    // Initialize the reachability matrix with the given graph
    for (int i = 0; i < V; i++)
        for (int j = 0; j < V; j++)
            reach[i][j] = graph[i][j];

    // Shortest path computation
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                reach[i][j] = reach[i][j] || (reach[i][k] && reach[k][j]);
            }
        }
    }

    printSolution(reach);
}

void printSolution(int reach[][V]) {
    cout << "Transitive closure matrix is: " << endl;
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << reach[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int graph[V][V] = { {1, 1, 0, 1},
                        {0, 1, 1, 0},
                        {0, 0, 1, 1},
                        {0, 0, 0, 1}
                      };

    transitiveClosure(graph);

    return 0;
}
