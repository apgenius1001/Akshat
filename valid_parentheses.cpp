/******************************************************************************
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false

*******************************************************************************/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool isValid(string s) {
    int len = s.size();
    if(len%2 != 0) {
        return false;
    }
    std::cout << len << std::endl;
    
    stack<char> st;
    
    for(int i = 0; i < len; ++i) {
        
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        } else {
            if(st.empty() || 
                (s[i] == ')' && st.top() != '(') ||
                (s[i] == '}' && st.top() != '{') ||
                (s[i] == ']' && st.top() != '[')) {
                    return false;
                } else {
                    st.pop();
                }
        }
        
    }
 
  if(st.empty()) {
      return true;
  }  else {
      return false;
  } 
}


int main()
{
    std::string st = "()[";
    
    bool ret = isValid(st);
    std::cout << ret << std::endl;

    return 0;
}

