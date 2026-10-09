class Solution {
public:
    int hammingWeight(uint32_t n) {

     int  count =0;
        while (n) {

            count +=n&(1U<<0);
            n>>=1;
        }
       return count; 
    }

};
