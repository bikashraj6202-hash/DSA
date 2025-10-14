class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n1=ransomNote.size();
        int n2=magazine.size();
      unordered_map<char,int>mp;
      for(int i=0;i<n2;i++){
        mp[magazine[i]]++;
      }
      for(int i=0;i<n1;i++){
            mp[ransomNote[i]]--;
      }
      for(int i=0;i<n1;i++){
        if (mp[ransomNote[i]]<0){
            return false ;
        }
      }
      return true;

    }
};