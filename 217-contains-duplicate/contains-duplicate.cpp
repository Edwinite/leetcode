#include <vector>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> sort(nums.begin(), nums.end());
        int x = nums.size();
        int y = sort.size();
        if(x == y)
        {
         return false;
        }
        else 
        {
         return true;
        }
        };
};