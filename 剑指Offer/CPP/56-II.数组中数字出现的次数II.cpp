#include<map>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> v;
        for(int i = 0;i < nums.size(); i++) {
            v[nums[i]]++;
        }
        int res;
        for(map<int, int>::iterator it = v.begin(); it != v.end(); it++) {
            if (it->second == 1) {
                res = it->first;
                break;
            }
        }
        return res;
    }
};