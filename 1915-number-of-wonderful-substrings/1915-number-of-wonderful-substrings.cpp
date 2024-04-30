

class Solution {
public:
    long long wonderfulSubstrings(std::string word) {
        std::unordered_map<int, long long> count; // Map to store counts of prefixes with particular bitmasks
        count[0] = 1; // Initialize count for empty string
        long long result = 0;
        int mask = 0; // Current bitmask
        
        for (char c : word) {
            int bit = c - 'a'; // Bit position for the current character
            mask ^= (1 << bit); // Toggle the bit corresponding to the current character
            
            // Count substrings where all characters have even frequencies
            result += count[mask];
            
            // Count substrings where exactly one character has odd frequency
            for (int i = 0; i < 10; ++i) {
                int oddMask = mask ^ (1 << i);
                result += count[oddMask];
            }
            
            // Update count for the current bitmask
            count[mask]++;
        }
        
        return result;
    }
};
