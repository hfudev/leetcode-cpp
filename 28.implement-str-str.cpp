/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 *
 * https://leetcode.com/problems/implement-strstr/description/
 *
 * algorithms
 * Easy (31.49%)
 * Total Accepted:    398.5K
 * Total Submissions: 1.3M
 * Testcase Example:  '"hello"\n"ll"'
 *
 * Implement strStr().
 * 
 * Return the index of the first occurrence of needle in haystack, or -1 if
 * needle is not part of haystack.
 * 
 * Example 1:
 * 
 * 
 * Input: haystack = "hello", needle = "ll"
 * Output: 2
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: haystack = "aaaaa", needle = "bba"
 * Output: -1
 * 
 * 
 * Clarification:
 * 
 * What should we return when needle is an empty string? This is a great
 * question to ask during an interview.
 * 
 * For the purpose of this problem, we will return 0 when needle is an empty
 * string. This is consistent to C's strstr() and Java's indexOf().
 * 
 */
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.size() <= 0)
            return 0;

        vector<int> lps = getLPS(needle);
        
        for (int i = 0, j = 0; i < haystack.size();)
        {
            if (haystack[i] == needle[j])
            {
                ++i;
                ++j;
            }
            else
            {
                if (j > 0)
                    j = lps[j - 1];
                else
                    ++i;
            }
            if (j == needle.size())
                return i - j;
        }
        return -1;
    }

private:
    vector<int> getLPS(string needle)
    {
        vector<int> lps(needle.size(), 0);
        for (int i = 1, len = 0; i < needle.size();)
        {
            if (needle[i] == needle[len])
                lps[i++] = ++len;
            else if (len > 0)
                len = lps[len - 1];
            else
                lps[i++] = 0;
        }
        return lps;
    }
};

