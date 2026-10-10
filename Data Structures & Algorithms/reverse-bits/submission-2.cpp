class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t n_rev=0x00000000;
        for (uint32_t i =0;i <32;i++) {

             n_rev = (n_rev << 1)| (n&1);
            n =n>>1u;
        }
        return n_rev;
    }
};
