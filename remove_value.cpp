#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool IsOdd(int i) {
    return (i%2 == 1);
}

void moveZeroes(vector<int>& nums) {
    int val = 0;
    int temp;
    int count = 0;
    
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != val) {
            temp = nums[count];
            nums[count] = nums[i];
            nums[i] = temp;
            count++;
        }
    }
}

int main()
{
    std::vector<int> v = {1,2,3,4,3,2,1,0,3,4,6,7,1,2,3,0,0,0};
    //1. solution
    moveZeroes(v);
    for(auto ret1 : v) {
        std::cout << ret1 << std::endl;
    }
    
    //2. solution using remove-erase idiom
    auto ret = std::remove_if(v.begin(), v.end(), IsOdd);
    std::cout << v.size() << std::endl;
    v.erase(ret, v.end());
    
    std::cout << v.size() << std::endl;
    for(auto ret1 : v) {
        std::cout << ret1 << std::endl;
    }

    return 0;
}

