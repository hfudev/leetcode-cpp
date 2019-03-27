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