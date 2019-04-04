/*
 * @lc app=leetcode id=67 lang=cpp
 *
 * [67] Add Binary
 *
 * https://leetcode.com/problems/add-binary/description/
 *
 * algorithms
 * Easy (38.32%)
 * Total Accepted:    287.3K
 * Total Submissions: 747.6K
 * Testcase Example:  '"11"\n"1"'
 *
 * Given two binary strings, return their sum (also a binary string).
 * 
 * The input strings are both non-empty and contains only characters 1 or 0.
 * 
 * Example 1:
 * 
 * 
 * Input: a = "11", b = "1"
 * Output: "100"
 * 
 * Example 2:
 * 
 * 
 * Input: a = "1010", b = "1011"
 * Output: "10101"
 * 
 */
#include <string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int n = max(a.size(), b.size());
        if (a.size() < n)
            a = alignBits(a, n);
        if (b.size() < n)
            b = alignBits(b, n);

        string res = "";
        int carry = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            int currA = ctoi(a[i]);
            int currB = ctoi(b[i]);
            int temp = currA + currB + carry;
            res = itoc(temp % 2) + res;
            carry = (temp > 1) ? 1 : 0;
        }
        if (carry > 0)
            res = '1' + res;
        
        return res;
    }
private:
    int ctoi(char a)
    {
        return int(a) - 48;
    }
    char itoc(int a)
    {
        return char(a + 48);
    }
    string alignBits(string a, int size)
    {
        string temp = a;
        return a.assign(size - a.size(), '0').append(temp);
    }
};

