class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int max1 = 0;
        int max0 = 0;
        
        int cnt = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == 1){
                cnt++;
                max1 = max(max1, cnt);
            }
            else{
                cnt = 0;
            }
        }
        cnt = 0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i] == 0){
                cnt++;
                max0 = max(max0, cnt);
            }
            else{
                cnt = 0;
            }
        }
        return max(max1, max0);
    }
};