#include <iostream>
#include <vector>
#include <queue>
#include <climits>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

typedef pair<int, int> pii;

const int INF = INT_MAX;

// Structure to represent an edge
struct Edge {
    int to;
    int weight;
};

// Dijkstra's algorithm function
vector<int> dijkstra(vector<vector<Edge>>& graph, int start) {
    int n = graph.size();
    vector<int> dist(n, INF); // Initialize distances with infinity
    priority_queue<pii, vector<pii>, greater<pii>> pq; // Min heap for priority queue

    // Start from the given start node
    dist[start] = 0;
    pq.push({0, start});

    // Dijkstra's algorithm
    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        // Skip if we already found a shorter path to u
        if (d > dist[u]) continue;

        // Traverse all neighbors of u
        for (Edge& edge : graph[u]) {
            int v = edge.to;
            int weight = edge.weight;

            // Relaxation step
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Create the graph
        vector<vector<Edge>> graph(n + 1); // 1-based indexing

        // Read edges
        for (int i = 1; i < n; ++i) {
            int x, y, l;
            cin >> x >> y >> l;
            graph[x].push_back({y, l});
            graph[y].push_back({x, l});
        }

        // Apply Dijkstra's algorithm for each node
        vector<vector<int>> shortestPaths(n + 1);
        for (int i = 1; i <= n; ++i) {
            shortestPaths[i] = dijkstra(graph, i);
        }


        // Now you have shortest paths from each node to all other nodes in shortestPaths vector
        // You can perform further calculations or processing here
        ll Mn=INT_MAX;
        for(int i=1;i<=n;i++)
        {
            ll sum=0;
            for(int j=1;j<=n;j++)
            {
                sum+=shortestPaths[i][j];
            }
            if(sum<Mn)
            {
                Mn=sum;
            }
        }
        cout<<Mn<<endl;
    }

    return 0;
}
