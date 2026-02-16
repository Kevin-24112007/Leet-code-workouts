class Solution {
public:
    int reverseBits(int n) {
        bitset<32> numbit(n);
        string bit = numbit.to_string();
        reverse(bit.begin(),bit.end());
        return static_cast<uint32_t>(bitset<32>(bit).to_ulong());
    }
};