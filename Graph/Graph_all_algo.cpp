#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <limits>
#include <set>

using namespace std;

// Function to perform Depth-First Search
void DFSUtil(int v, vector<bool> &visited, const vector<vector<pair<int, int>>> &adj)
{
    visited[v] = true;
    cout << v << " ";

    for (auto &neighbor : adj[v])
    {
        if (!visited[neighbor.first])
        {
            DFSUtil(neighbor.first, visited, adj);
        }
    }
}

void DFS(int start, const vector<vector<pair<int, int>>> &adj)
{
    vector<bool> visited(adj.size(), false);
    DFSUtil(start, visited, adj);
    cout << endl;
}

// Function to perform Breadth-First Search
void BFS(int start, const vector<vector<pair<int, int>>> &adj)
{
    vector<bool> visited(adj.size(), false);
    queue<int> q;
    visited[start] = true;
    q.push(start);

    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        cout << v << " ";

        for (auto &neighbor : adj[v])
        {
            if (!visited[neighbor.first])
            {
                visited[neighbor.first] = true;
                q.push(neighbor.first);
            }
        }
    }
    cout << endl;
}

// Dijkstra's Algorithm
void dijkstra(int start, const vector<vector<pair<int, int>>> &adj)
{
    int V = adj.size();
    vector<int> dist(V, numeric_limits<int>::max());
    dist[start] = 0;
    set<pair<int, int>> s; // (distance, vertex)
    s.insert({0, start});

    while (!s.empty())
    {
        int u = s.begin()->second;
        s.erase(s.begin());

        for (auto &neighbor : adj[u])
        {
            int v = neighbor.first;
            int weight = neighbor.second;

            if (dist[u] + weight < dist[v])
            {
                s.erase({dist[v], v});
                dist[v] = dist[u] + weight;
                s.insert({dist[v], v});
            }
        }
    }

    for (int i = 0; i < V; i++)
    {
        cout << "Distance from " << start << " to " << i << " is " << (dist[i] == numeric_limits<int>::max() ? -1 : dist[i]) << endl;
    }
}

// Prim's Algorithm
void prim(const vector<vector<pair<int, int>>> &adj)
{
    int V = adj.size();
    vector<int> key(V, numeric_limits<int>::max());
    vector<bool> inMST(V, false);
    key[0] = 0;
    set<pair<int, int>> s; // (key, vertex)
    s.insert({0, 0});

    while (!s.empty())
    {
        int u = s.begin()->second;
        s.erase(s.begin());
        inMST[u] = true;

        for (auto &neighbor : adj[u])
        {
            int v = neighbor.first;
            int weight = neighbor.second;

            if (!inMST[v] && weight < key[v])
            {
                key[v] = weight;
                s.erase({key[v], v});
                s.insert({key[v], v});
            }
        }
    }

    cout << "Minimum Spanning Tree (Prim's):" << endl;
    for (int i = 0; i < V; i++)
    {
        cout << "Vertex " << i << " has key " << key[i] << endl;
    }
}

// Kruskal's Algorithm
struct Edge
{
    int u, v, weight;
};

bool compare(Edge a, Edge b)
{
    return a.weight < b.weight;
}

int find(int u, vector<int> &parent)
{
    if (parent[u] != u)
    {
        parent[u] = find(parent[u], parent); // Path compression
    }
    return parent[u];
}

void kruskal(const vector<vector<pair<int, int>>> &adj)
{
    vector<Edge> edges;
    int V = adj.size();
    for (int u = 0; u < V; u++)
    {
        for (auto &neighbor : adj[u])
        {
            if (u < neighbor.first)
            { // Avoid adding the same edge twice
                edges.push_back({u, neighbor.first, neighbor.second});
            }
        }
    }
    sort(edges.begin(), edges.end(), compare);

    vector<int> parent(V);
    for (int i = 0; i < V; i++)
    {
        parent[i] = i;
    }

    cout << "Minimum Spanning Tree (Kruskal's):" << endl;
    for (auto &edge : edges)
    {
        int u = edge.u;
        int v = edge.v;
        int weight = edge.weight;

        int set_u = find(u, parent);
        int set_v = find(v, parent);

        if (set_u != set_v)
        {
            cout << u << " -- " << v << " == " << weight << endl;
            parent[set_u] = set_v;
        }
    }
}

// Bellman-Ford Algorithm
void bellmanFord(int start, const vector<vector<pair<int, int>>> &adj)
{
    int V = adj.size();
    vector<int> dist(V, numeric_limits<int>::max());
    dist[start] = 0;

    for (int i = 1; i < V; i++)
    {
        for (int u = 0; u < V; u++)
        {
            for (auto &neighbor : adj[u])
            {
                int v = neighbor.first;
                int weight = neighbor.second;
                if (dist[u] != numeric_limits<int>::max() && dist[u] + weight < dist[v])
                {
                    dist[v] = dist[u] + weight;
                }
            }
        }
    }

    cout << "Bellman-Ford distances from " << start << ":" << endl;
    for (int i = 0; i < V; i++)
    {
        cout << "Distance to " << i << " is " << (dist[i] == numeric_limits<int>::max() ? -1 : dist[i]) << endl;
    }
}

int main()
{
    int V, E;
    cout << "Enter number of vertices: ";
    cin >> V;
    cout << "Enter number of edges: ";
    cin >> E;

    vector<vector<pair<int, int>>> adj(V);

    cout << "Enter edges (u v weight):" << endl;
    for (int i = 0; i < E; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        if (u >= 0 && u < V && v >= 0 && v < V)
        { // Check for valid vertex indices
            adj[u].emplace_back(v, w);
            adj[v].emplace_back(u, w); // For undirected graph
        }
        else
        {
            cout << "Invalid edge: " << u << " " << v << endl;
            i--; // Decrement i to repeat this iteration
        }
    }

    int start;
    cout << "Enter starting vertex for DFS and BFS: ";
    cin >> start;
    if (start >= 0 && start < V)
    {
        cout << "DFS starting from vertex " << start << ":" << endl;
        DFS(start, adj);

        cout << "BFS starting from vertex " << start << ":" << endl;
        BFS(start, adj);
    }
    else
    {
        cout << "Invalid starting vertex." << endl;
    }

    cout << "Enter starting vertex for Dijkstra's Algorithm: ";
    cin >> start;
    if (start >= 0 && start < V)
    {
        cout << "Dijkstra's Algorithm starting from vertex " << start << ":" << endl;
        dijkstra(start, adj);
    }
    else
    {
        cout << "Invalid starting vertex." << endl;
    }

    cout << "Prim's Algorithm:" << endl;
    prim(adj);

    cout << "Kruskal's Algorithm:" << endl;
    kruskal(adj);

    cout << "Enter starting vertex for Bellman-Ford Algorithm: ";
    cin >> start;
    if (start >= 0 && start < V)
    {
        cout << "Bellman-Ford Algorithm starting from vertex " << start << ":" << endl;
        bellmanFord(start, adj);
    }
    else
    {
        cout << "Invalid starting vertex." << endl;
    }

    return 0;
}
