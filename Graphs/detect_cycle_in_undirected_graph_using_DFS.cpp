//problem link -> https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1

bool iscycleDFS(vector<int> adj[], int u, vector<bool>& visited, int parent)
  {
      visited[u]=true;
      
      for(int &v : adj[u])
      {
          if(v==parent)
          {
              continue;
          }
          if(visited[v])
          {
              return true;
          }
          if(iscycleDFS(adj, v, visited,u))
          {
              return true;
          }
      }
      return false;
  }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int v, vector<int> adj[]) {
        // Code here
        vector<bool> visited(v, false);
        for(int i =0; i<v; i++)
        {
            if(!visited[i] && iscycleDFS(adj, i,visited, -1))
            {
                return true;
            }
        }
        return false;
    }
