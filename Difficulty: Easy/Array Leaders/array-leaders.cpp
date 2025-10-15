

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
       int n = arr.size();
       vector<int> ans;
       int leftMax = INT_MIN;
       
       for(int i=n-1; i>=0; i--){
           if(arr[i] >= leftMax){
               ans.push_back(arr[i]);
               leftMax = max(leftMax, arr[i]);
           }
           else{
               leftMax = max(leftMax, arr[i]);
           }
       }
       reverse(ans.begin(), ans.end());
       return ans;
    }
};