class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {

        int v= graph.size();
        vector<int>color(v,-1);
         for(int start=0; start<v; start++) {
            if(color[start] == -1) { // unvisited component
                queue<int> q;
                q.push(start);
                color[start] = 0;

        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(int it:graph[node]){
                if(color[it]==-1){
                    q.push(it);
                    color[it]=!color[node];

                }
                else if(color[it]==color[node]){
                    return false;
                }
            }
        }
            }
         }
        return true;
    }
};