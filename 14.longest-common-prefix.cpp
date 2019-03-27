/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 *
 * https://leetcode.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (33.14%)
 * Total Accepted:    427.5K
 * Total Submissions: 1.3M
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * Write a function to find the longest common prefix string amongst an array
 * of strings.
 * 
 * If there is no common prefix, return an empty string "".
 * 
 * Example 1:
 * 
 * 
 * Input: ["flower","flow","flight"]
 * Output: "fl"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: ["dog","racecar","car"]
 * Output: ""
 * Explanation: There is no common prefix among the input strings.
 * 
 * 
 * Note:
 * 
 * All given inputs are in lowercase letters a-z.
 * 
 */
#include <vector>
#include <string>
#include <stack>
#include <stdexcept>
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
                        paren.pop();
                    break;
                
                case ']':
                    if (paren.empty() || paren.top() != '[')
                        return false;
                    else
                        paren.pop();
                    break;

                case '}':
                if (paren.empty() || paren.top() != '{')
                        return false;
                    else
                        paren.pop();
                    break;

                default:
                    break;
            }
        }
        return paren.empty();
    }
};

