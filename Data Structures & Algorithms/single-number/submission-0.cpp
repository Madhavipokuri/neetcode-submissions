class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int num =0;
 for (auto value : nums) 
 {
    num ^= value ; 
 }
return num;
    }
};
