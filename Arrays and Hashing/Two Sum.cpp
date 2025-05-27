class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size(); //getting the size of the array num ans storing it in variable n
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(nums[i] + nums[j] == target){
                    return{i,j};
                }
            }
        }
        return {};

    }
};
