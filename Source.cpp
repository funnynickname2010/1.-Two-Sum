#include <vector>

/*The actual solution*/

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {

        int isum_one = 0, isum_two = 0;
        std::vector<int> result = {};

        //First loop
        for (size_t i = 0; i < nums.size(); i++) {
            isum_one = i;

                /*The second loop, choosing the second
                index of the sum*/
            for (size_t j = i + 1; j < nums.size(); j++) {
                isum_two = j;

                /*If the task is done*/
                if (nums[isum_one] + nums[isum_two] == target) {
                    result = { isum_one, isum_two };
                    break;
                    }
                }
        }

        return result;
    }
};

/*End of the solution*/

/*Main is needed for testing*/

int main() {
    Solution sol;
    std::vector<int> nums = { 2, 7, 11, 15 };
    int target = 9;

    std::vector<int> result = sol.twoSum(nums, target);
    return 0;
}