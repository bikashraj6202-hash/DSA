class Solution {
public:
    void nextPermutation(vector<int>& arr) {
       int i1=-1,i2=-1;
       int n=arr.size();
       if(n==1)return ;
       for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            i1=i;
            break;
        }
       }
       if(i1==-1){
        sort(arr.begin(),arr.end());
        return ;
       }
     
       for(int i=n-1;i>=0;i--){
        if(arr[i]>arr[i1]){
            i2=i;
            break;
        }
       }
       swap(arr[i1],arr[i2]);
         for(int i=0;i<n;i++){
        cout<<arr[i];
       }
        reverse(arr.begin()+i1+1,arr.end());
        return;
    }
};