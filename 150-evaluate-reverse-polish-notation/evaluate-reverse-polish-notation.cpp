class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int n=tokens.size();
        st.push(stoi(tokens[0]));
        for(int i=1;i<n;i++){
         if(tokens[i]=="+"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop(); 
                st.push(b+a);
            }
            else if(tokens[i]=="-"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop(); 
                st.push(b-a);
            }
            else if (tokens[i]=="*"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop(); 
                st.push(b*a);
            }
         else if (tokens[i]=="/"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop(); 
                st.push(b/a);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};