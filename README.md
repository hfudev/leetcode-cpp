# leetcode-cpp
Leetcode Practice with C++

# Directory
[Thanks to](#thanks-to)

[Easy](#easy)

# Thanks to
[vscode-leetcode](https://github.com/jdneo/vscode-leetcode)

用了这玩意儿贼爽贼带感, 刷题就像是飞的感觉。

With vscode-leetcode, you can fuck leetcode easily.

# Easy

- 1 - Two Sum
    
    建一个哈希表key是值value是下标直接查，找不到的话就存起来，在过半了的时候就能找到了。

- 7 - Reverse Integer

    简单的一笔。结果每次 * 10 加上x % 10， x每次 / 10直接被截尾，最后比较一下result溢出了就设成0就完事了。注意result类型设成long，不然最后比较不了。

- 9 - Palindrome Number

    先排除错误答案，比如说负数和不为零但能被10整除的数，然后就和上面的reverse integer一毛一样了。需要注意的是这一次仅仅是判断，所以走完一半就行了，还需要考虑整个数是奇数位还是偶数位的情况。

- 13 - Roman To Integer

    如果我们从左向右进行比较，那么就要判断一个数字是加还是减，比较麻烦。那么我们就从右向左看，因为减法只存在于一位，所以易证从右向左的正确性。如果ab(a >= b)那么就是b + a 如果ab(a < b) 那么就是b - a。

- 14 - Longest Common Prefix

    依次遍历所有vector里面string的字符，每个循环都开一个数组存每个string的第几位是多少，使用at()来取数，这样如果越界，抓到了out_of_range就直接返回结果，每次只要和上一次的比一下就行了，只要不一样就直接返回结果。

- 20 - Valid Parentheses

    这一题考的就是能不能想到栈，看见一个左括号就push进去，看见一个与栈顶对应的右括号就pop出来，要是不对应就返回false就完事了。

- 21 - Merge Two Sorted Lists

    先决定头是谁，然后存一下这个头，然后就依次遍历就完事了。注意不等长的情况。

    这一题我的做法有点慢。faster than 30%，什么鬼。用递归应该会好一点。