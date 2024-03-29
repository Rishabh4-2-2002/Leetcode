class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < 32; i++) {
            int count1 = 0;
            int count0 = 0;
            for (int j = 0; j < nums.size(); j++) {
                if ((1 << i) & nums[j]) count1++;
                else count0++;
            }
            if (count1 % 3 ) {
                ans = ans | (1 << i);
            }
        }
        return ans;
    }
};
