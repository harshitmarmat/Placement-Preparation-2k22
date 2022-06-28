class Solution {
public:
    int helper(int n , vector<int>& arr){
        if(n==0){
            return arr[0];
        }
        return max((arr[n]+helper(n-1,arr)),helper(n-1,arr));
    }


    int maxSubArray(vector<int>& nums) {
        return helper(nums.size()-1,nums);      
    }
};