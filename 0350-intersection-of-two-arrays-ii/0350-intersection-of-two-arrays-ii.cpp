class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>mp;
        for(int &num:nums1){
            mp[num]++;
        }
        vector<int>result;
        for(int i =0;i<nums2.size();i++){
            int element=nums2[i];
            if(mp[element]>0){
                mp[element]--;
                result.push_back(element);
            }
        }
        return result;
                
    }
};