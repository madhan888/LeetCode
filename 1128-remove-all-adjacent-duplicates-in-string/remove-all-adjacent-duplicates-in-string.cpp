class Solution {
public:
    string removeDuplicates(string s) {
        
        stack<char> st;
        
        int n = s.length();
        string result = "";
        string final = "";
        
        for(int i =0 ; i<n ; i++){
            if(st.empty() || st.top()!= s[i]){
                st.push(s[i]);
            }
            
            else{
                st.pop();
            }
            
        }
        
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        
        int m = result.length();
        for(int i = m-1;i >=0 ;i--){
            final.push_back(result[i]);
        }
        
        return final;
        
    }
};