/*
 * @lc app=leetcode id=66 lang=cpp
 *
 * [66] Plus One
 *
 * https://leetcode.com/problems/plus-one/description/
 *
 * algorithms
 * Easy (40.85%)
 * Total Accepted:    368.9K
 * Total Submissions: 902K
 * Testcase Example:  '[1,2,3]'
 *
 * Given a non-empty array of digits representing a non-negative integer, plus
 * one to the integer.
 * 
 * The digits are stored such that the most significant digit is at the head of
 * the list, and each element in the array contain a single digit.
 * 
 * You may assume the integer does not contain any leading zero, except the
 * number 0 itself.
 * 
 * Example 1:
 * 
 * 
 * Input: [1,2,3]
 * Output: [1,2,4]
 * Explanation: The array represents the integer 123.
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: [4,3,2,1]
 * Output: [4,3,2,2]
 * Explanation: The array represents the integer 4321.
 * 
 */
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();

        digits[n - 1] += 1;
        if (digits[n - 1] < 10)
            return digits;

        for (int i = n - 1; i >= 0; --i)
        {
            digits[i] += 1;
            
            if (digits[i] < 10)
                return digits;
            else
            {
                digits[i] = 0;
                if (i == 0)
                {
                    digits.insert(digits.begin(), 1);
                    return digits;
                }
            }
        }
        return digits;
    }
};

