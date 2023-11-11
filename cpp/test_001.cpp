#include<iostream>
#include <cstring>
#include <memory>
#include <vector>
using namespace std;



class Solution {
public:
    vector<int> twoSum(vector<int>& inputs, int target)
    {
        int size = inputs.size();
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (target == inputs[i] + inputs[j])
                    return { i, j };
                
            }
        }
        return {};
    }
};

int main() {
    vector<int> input = { 1, 2, 3, 4 };
    Solution solution = Solution();
    auto a = solution.twoSum(input, 7);
    std::cout << "Hello World!" << std::endl;
    std::cout << a[0] << endl << a[1] << std::endl;
}

