#include <stdint.h>

class Solution {
public:
    // Approach 1: Loop and Bit Check
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n) {
            // n & 1 checks if least significant bit is 1
            count += n & 1;
            // Right shift n by 1
            n >>= 1;
        }
        return count;
    }
    
    // Approach 2: Brian Kernighan's Algorithm
    int hammingWeight2(uint32_t n) {
        int count = 0;
        while (n) {
            // n & (n-1) removes the rightmost set bit
            n &= (n - 1);
            count++;
        }
        return count;
    }
    
    // Approach 3: Built-in function (compiler specific)
    int hammingWeight3(uint32_t n) {
        return __builtin_popcount(n);
    }
    
    // Approach 4: Lookup Table
    int hammingWeight4(uint32_t n) {
        // Precomputed lookup table for 8-bit numbers
        static const int lookup[256] = {
            0, 1, 1, 2, 1, 2, 2, 3, 1, 2, 2, 3, 2, 3, 3, 4,
            // ... (remaining values omitted for brevity)
        };
        
        // Process 8 bits at a time
        return lookup[n & 0xff] + 
               lookup[(n >> 8) & 0xff] + 
               lookup[(n >> 16) & 0xff] + 
               lookup[(n >> 24) & 0xff];
    }
}; 