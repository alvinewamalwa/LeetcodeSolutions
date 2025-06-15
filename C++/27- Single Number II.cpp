class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        vector<int> setBits(32, 0);

        for(int i=0; i<nums.size(); i++) {
            int x = nums[i];

            for(int j=0; j<32; j++) {
                if(x & 1 == 1) {
                    setBits[j] += 1;
                }
            
            x = x >> 1;
        }
    }

    for(int i=31; i>=0; i--) {
        ans = ans << 1;
        if(setBits[i] % 3 != 0) {
            ans |= 1;
        }
    }

    return ans;
    }
};