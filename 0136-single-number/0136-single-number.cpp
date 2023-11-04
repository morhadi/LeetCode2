class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ns = nums.size();
        if (ns==1)
        return nums[0];
        int a = 0;
        for(int i=0; i<ns ; i++){
            a ^= nums[i];
        }
        return a ;
    }
};