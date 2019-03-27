/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 *
 * https://leetcode.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (36.09%)
 * Total Accepted:    542.7K
 * Total Submissions: 1.5M
 * Testcase Example:  '"()"'
 *
 * Given a string containing just the characters '(', ')', '{', '}', '[' and
 * ']', determine if the input string is valid.
 * 
 * An input string is valid if:
 * 
 * 
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 * 
 * 
 * Note that an empty string is also considered valid.
 * 
 * Example 1:
 * 
 * 
 * Input: "()"
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "()[]{}"
 * Output: true
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: "(]"
 * Output: false
 * 
 * 
 * Example 4:
 * 
 * 
 * Input: "([)]"
 * Output: false
 * 
 * 
 * Example 5:
 * 
 * 
 * Input: "{[]}"
 * Output: true
 * 
 * 
 */
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> paren;
        for (char&c : s)
        {
            switch (c)
            {
                case '(':
                case '[':
                case '{':
                    paren.push(c);
                    break;
                
                case ')':
                    if (paren.empty() || paren.top() != '(')
                        return false;
                    else
                    {
                        paren.pop();
                        return true;
                    }
                    break;
                
                case ']':
                    if (paren.empty() || paren.top() != '[')
                        return false;
                    else
                    {
                        paren.pop();
                        return true;
                    }
                    break;

                case '}':
                if (paren.empty() || paren.top() != '{')
                        return false;
                    else
                    {
                        paren.pop();
                        return true;
                    }
                    break;

                default:
                    break;
            }
        }
        return paren.empty();
    }
};

