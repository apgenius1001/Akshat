#include <iostream>
#include <string>

using namespace std;

void removeDuplicates(std::string& s)
{
    std::string converted;
    auto prev = s.front();
    converted = prev;
    
    for(auto it = s.begin(); it != s.end(); ++it) {
        cout << *it << prev << endl;;
        if(prev != *it) {
            converted.push_back(*it);
            //converted += *it;
        }
        prev = *it;
    }
    std::cout << "converted string: " << converted << std::endl;
}

int main()
{
    std::string S("aabbccdddwaacc");
    
    removeDuplicates(S);
    return 0;
}

#if 0
int removeduplicates(std::string& nums)
{
    std::sort(nums.begin(), nums.end());
    std::cout << nums << std::endl;

    auto last = std::unique(nums.begin(), nums.end());
    
    std::cout << nums << std::endl;
    
    nums.resize(std::distance(nums.begin(), last));
    std::cout << nums << std::endl;
    
    return nums.size();
}

int main()
{
    std::string v = "abcddeeaabbefzeerr";
    
    int num = removeduplicates(v);
    
    std::cout << num << std::endl;

    return 0;
}
#endif
