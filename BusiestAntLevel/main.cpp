#include <iostream>
#include <vector>
#include <queue>

int main()
{
    // ---  DEFINE VARIABLES --- //
    int n = 0;

    // --- GATHER NUMBER OF TUNNELS --- //
    std::cin >> n;

    // --- BUILD THE TREE (UNDIRECTED) --- //
    std::vector<std::vector<int>> tree(n);

    for (int i = 1; i < n; ++i) {
        int u = 0;
        int v = 0;
        std::cin >> u >> v;

        tree[u].push_back(v);
        tree[v].push_back(u); // ✅ add reverse edge
    }

    // --- BFS SETUP --- //
    std::vector<bool> visited(n, false);

    std::queue<int> q;
    q.push(0); // start at root (guaranteed by problem)
    visited[0] = true;

    int max_chambers = 0;
    int currentLevel = 0;
    int minLevel = 0;

    // --- BFS --- //
    while (!q.empty()) {
        int size = q.size(); // number of nodes at this level

        // update max
        if (size > max_chambers) {
            max_chambers = size;
            minLevel = currentLevel;
        }

        // process current level
        for (int i = 0; i < size; i++) {
            int node = q.front();
            q.pop();

            // add neighbors (children) to queue
            for (int neighbor : tree[node]) {
                if (!visited[neighbor]) { // ✅ prevent going backwards
                    visited[neighbor] = true;
                    q.push(neighbor);
                }
            }
        }

        currentLevel++;
    }

    std::cout << minLevel << std::endl;

    return 0;
}