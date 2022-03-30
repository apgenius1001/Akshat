/******************************************************************************
Test palindrome
*******************************************************************************/

#include <iostream>

using namespace std;

int palindrome(std::string str)
{
    int len = str.length();
    for(int i = 0; i < len/2; ++i) {
        if(str[i] != str[len-i-1]) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    std::string s = "racecar";
    int ret = palindrome(s);
    if(ret){
        cout << "palindrome" << endl;
    } else {
        cout << "Not palindrome"<< endl;
    }

    return 0;
}

