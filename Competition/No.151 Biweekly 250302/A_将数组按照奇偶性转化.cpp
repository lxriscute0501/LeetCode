class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size(), cnt = 0;
        for (int i = 0; i < n; i++)
            if (nums[i] % 2 == 0) cnt ++;
        for (int i = 0; i < cnt; i++)
          nums[i] = 0;
        for (int i = cnt; i < n; i++)
          nums[i] = 1;
        return nums;
    }
};
