class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> count;
        vector<int> answer;

        // Count elements in nums1
        for (int num : nums1) {
            count[num]++;
        }

        // Find intersections with nums2
        for (int num : nums2) {
            if (count[num] > 0) {
                answer.push_back(num);
                count[num]--;
            }
        }

        return answer;
    }
};
