#include <algorithm>
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int num=0 ;
        for (uint32_t i =0 ;i<nums.size(); i++)
        {   if (nums[i]!=0) {
            return num;}
             //else if(nums[i+1]-nums[i]>1) {  return num =nums[i]+1;}
            else 
            return num;

        }
        
      return num; 
    }
};
