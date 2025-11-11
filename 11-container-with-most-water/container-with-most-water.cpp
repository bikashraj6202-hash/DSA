class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int i=0;
        int j=n-1;
        int maxh=INT_MIN;
        while(i<j){
            if(height[i]>height[j]){
                maxh=max(maxh,height[j]*(j-i));
                j--;
            }
            else{
                maxh=max(maxh,height[i]*(j-i));
                i++;
            }
        }
        return maxh;
    }
};