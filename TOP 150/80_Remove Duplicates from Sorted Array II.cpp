class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) return n;
        int l = 2, r = 2;
        
        while (r < n)
        {
            if (nums[l - 2] == nums[r]) {
                r ++; 
                continue;
            } else {
                nums[l] = nums[r];
                l ++; 
                r ++;
            }
        }
        return l;
    }
};
