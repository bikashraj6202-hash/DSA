class Solution {

public:
bool ischeck(int start,int v,vector<vector<int>>&graph,vector<int>&color){  
                queue<int> q;
                q.push(start);
                color[start] =0;

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
        return true;

}
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
       vector<int>color(n,-1);
      for(int i=0;i<n;i++){
        if(color[i]==-1){
            if(ischeck(i,n,graph,color)==false){
                return false;
            }
        }
      }
      return true;
    }
};