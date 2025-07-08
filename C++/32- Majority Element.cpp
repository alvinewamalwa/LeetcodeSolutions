class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int majorityCandidate = nums[0];
       int majorityCount = 1;

       for(int i=1; i<nums.size(); i++) {
        if(nums[i] == majorityCandidate) {
            majorityCount += 1;
        }
        else {
            majorityCount -= 1;
            if(majorityCount == 0) {
                majorityCandidate = nums[i];
                majorityCount = 1;
            }
        }
       }

       return majorityCandidate;
    }
};