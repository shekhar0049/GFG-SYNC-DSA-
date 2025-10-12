// User function template for C++
class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        stack<int> st;
        stack<int> stt;
        
        for(int i=arr.size()-1; i >= 0; i--){
            if(arr[i] >= 0 ){
                st.push(arr[i]);
            }
            else{
                stt.push(arr[i]);
            }
        }
        
        int i = 0;
        while(!st.empty() && !stt.empty()){
            arr[i++] = st.top();
            st.pop();
            arr[i++] = stt.top();
            stt.pop();
        }
        while(!st.empty()){
            arr[i++] = st.top();
            st.pop();
        }
        while(!stt.empty()){
            arr[i++] = stt.top();
            stt.pop();
        }
    }
};