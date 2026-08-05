class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>>vl(n);
        vector<bool>sp(n,false);
        vector<int>in(n,0);

        for(auto &ed:invocations){
            int u=ed[0];
            int v=ed[1];
            vl[u].push_back(v);
            in[v]++;
        }

        // bfs;
        queue<int>q;
        q.push(k);
        sp[k]=true; 
       while(!q.empty()){
        int curr=q.front();
        q.pop();
        for(auto &it:vl[curr]){
            in[it]--;
            if(!sp[it]){
                q.push(it);
                sp[it]=true;
            }
        } 
       }
       vector<int>result;
       bool cn=false;
       for(int i=0;i<n;i++){
        if(sp[i] && in[i]>0){
            cn=true;
            break;
        }
        if(!sp[i]){
            result.push_back(i);
        }
       }
       if(cn){
        vector<int>t;
        for(int i=0;i<n;i++){
            t.push_back(i);
        }
        return t;
       }
       return result;
    }
};