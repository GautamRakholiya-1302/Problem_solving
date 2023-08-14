class Solution {
    bool dfs(std::vector<std::vector<int>>& graph, std::vector<bool>& visited, int v, int dest) {
    visited[v] = true;
    if (v == dest) return true;
    for (int w : graph[v]) {
        if (!visited[w]) {
            if (dfs(graph, visited, w, dest)) {
                return true;
            }
        }
    }
    return false;
}

public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
         std::vector<std::vector<int>> graph(n);
    for (auto& edge : edges) {
        int u = edge[0];
        int v = edge[1];
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    std::vector<bool> visited(n, false);
    return dfs(graph, visited, source, destination);
    }
};