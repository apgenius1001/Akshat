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

