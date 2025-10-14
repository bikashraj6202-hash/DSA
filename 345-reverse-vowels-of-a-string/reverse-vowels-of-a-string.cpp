class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        int i=0;
        int j=n-1;
        unordered_map<char,int>mp={{'A',1},{'E',1},{'I',1},{'O',1},{'U',1},
        {'a',1},{'e',1},{'i',1},{'o',1},{'u',1}};

        while(i<j){
                while( i<j && !mp.count(s[i]))i++;
                while( i<j && !mp.count(s[j]))j--;
                swap(s[i],s[j]);
                i++;
                j--;
            }
            return s;
        }
};