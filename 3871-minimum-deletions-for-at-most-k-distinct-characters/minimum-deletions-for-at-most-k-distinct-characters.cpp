class Solution {
public:
    int minDeletion(string s, int k) 
    {
        vector<int> v(26,0);
        int count=0,res=0,i=0;
        for(auto it:s)
        {
            if(v[it-'a']==0)
            {
                count++;
            }
            v[it-'a']++;
        }  
        if(count<=k) return 0;
        sort(begin(v),end(v));
        while(i<26 and v[i]==0)
        {
            i++;
        }
        while(count>k)
        {
            res+=v[i++];
            count--;
        }
        return res;
    }
};