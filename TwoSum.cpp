class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> v= nums;
        int t = target;
        vector<int> v2;
        
        for(int i = 0; i< (v.size()-1) ; i ++){
           for(int j =(i+1); j< v.size() ; j++){
                if( (v[i] + v[j])==t){
                v2 = {i, j};
                
           }  
        }  
    }
        
    return v2;
    }
};
