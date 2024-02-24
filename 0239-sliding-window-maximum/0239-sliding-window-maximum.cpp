#include <vector>
#include <deque>

class Solution {
public:
    std::vector<int> maxSlidingWindow(std::vector<int>& nums, int k) {
        std::vector<int> ans;
        std::deque<int> q;
        int i = 0;
        int j = 0;

        while (j < nums.size()) {
            while (!q.empty() && nums[j] >= nums[q.back()]) { 
                q.pop_back();
            }
            q.push_back(j);

            if (j - i + 1 < k) {
                j++;
            } else if (j - i + 1 == k) {
                ans.push_back(nums[q.front()]);
                if (i == q.front()) {
                    q.pop_front();
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};
