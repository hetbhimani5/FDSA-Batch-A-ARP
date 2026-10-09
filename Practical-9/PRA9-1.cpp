#include <iostream>
#include <queue>
using namespace std;

int graph[10][10] = {0};
int visited[10] = {0};
int n;

void DFS(int start) {
    visited[start] = 1;
    cout << start << " ";

    for (int i = 0; i < n; i++) {
        if (graph[start][i] == 1 && visited[i] == 0) {
            DFS(i);
        }
    }
}

void BFS(int start) {
    int visited[10] = {0};
    queue<int> q;

    visited[start] = 1;
    q.push(start);

    while (!q.empty()) {
        int current = q.front();
        q.pop();

        cout << current << " ";

        for (int i = 0; i < n; i++) {
            if (graph[current][i] == 1 && visited[i] == 0) {
                visited[i] = 1;
                q.push(i);
            }
        }
    }
}

int main() {
    int edges, u, v, start;

    cout << "Enter number of buildings: ";
    cin >> n;

    cout << "Enter number of roads: ";
    cin >> edges;

    cout << "Enter roads (u v):\n";

    for (int i = 0; i < edges; i++) {
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }

    cout << "Enter starting building: ";
    cin >> start;

    cout << "DFS Order: ";
    DFS(start);

    cout << endl;

    for (int i = 0; i < n; i++) {
        visited[i] = 0;
    }

    cout << "BFS Order: ";
    BFS(start);

    cout << endl;

    return 0;
}