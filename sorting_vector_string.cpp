#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cout<<"sort a string in vector\n";
    
    std::vector<std::string> v = {"akshat", "pathak", "my", "name", "the"};
    
    std::sort(v.begin(), v.end(), [] 
    (const std::string& first, const std::string& second) {
        return first.size() < second.size();
    });
    
    for (const auto &it : v) {
        std::cout << it << std::endl;
    }

    return 0;
}
