#include <string>

class Solution {
public:
    int countSegments(std::string s) {
        int result = 0;
        bool inSegment = false; // Flag to track if we are inside a segment
        
        for (char c : s) {
            if (c == ' ') {
                if (inSegment) {
                    // End of segment, increment count
                    result++;
                    inSegment = false;
                }
            } else {
                if (!inSegment) {
                    // Start of new segment
                    inSegment = true;
                }
            }
        }
        
        // Check if the last character was part of a segment
        if (inSegment) {
            result++;
        }
        
        return result;
    }
};
