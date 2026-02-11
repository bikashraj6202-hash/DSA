
class Node {
public:
    float value;
    int row;
    int col;

    Node(float v, int r, int c){
        value = v;
        row = r;
        col = c;
    }
};
class Compare {
public:
    bool operator()(Node a, Node b){
        return a.value > b.value;  
    }
};
class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
         priority_queue<Node, vector<Node>, Compare> pq;
         int n=arr.size();
         int p=n/2;
         int i=0;
           for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                pq.push(Node((float)arr[i] / arr[j], i, j));
            }
        }
        // if(pq.empty()) return {}; 
         while(k>1){
            pq.pop();
            k--;
         }
         Node t=pq.top();
         vector<int>ans;
        
         return { arr[t.row],arr[t.col]};
    }
};