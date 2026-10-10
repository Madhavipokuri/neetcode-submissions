class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> output(n+1);
        
        for(uint32_t i =0 ;i <=n ;i++) {
          uint32_t count =0;
          uint32_t x =i;
            while(x)
            {
            count += (x&(1U<<0));
            x =x>>1;
            }
            output[i] =count;
        }
        return output;
        
    }
};
