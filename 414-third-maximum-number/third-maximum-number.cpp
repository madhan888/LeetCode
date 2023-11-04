class Solution {
public:
    int thirdMax(vector<int>& nums) {
        
        long long max1 = LLONG_MIN;
        long long max2 = LLONG_MIN;
        long long max3 = LLONG_MIN;
        
        for(int i : nums){
            
            if(i>max1){
                max3=max2;
                max2=max1;
                max1=i;
                
                
            }
            
            else if(i<max1 && i>max2){
                
                max3=max2;
                max2=i;
            }
            else if(i<max2 && i>max3){
                max3 = i;
            }
            
        }
        
        if(max3 ==  LLONG_MIN){
                
            return max1;
           }
        
        return max3;
        
        
        
    }
};