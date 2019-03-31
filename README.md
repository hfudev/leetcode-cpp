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

- 26 - Remove Duplicates From Sorted Array

    由于不能另开数组，那么我们就只能设个标志位，依次用数组里的比一下，不一样就标志位进一然后赋值就完事了。

- 27 - Remove Element

    这一题和上一题一毛一样，设个标志位，自己做吧。

- 28 - Implement strStr

    这一题不用KMP这么经典的算法都可惜了。具体详解请参考[如何更好的理解和掌握 KMP 算法? - 海纳的回答 - 知乎](https://www.zhihu.com/question/21923021/answer/281346746)
    不过我真的花了好久才写了个KMP啊，菜的一笔，继续努力啊。

- 35 - Search Insert Position

    依次比就完事了，注意判断条件的归并和最后的处理。

- 38 - Count and Say

    依次迭代，每次算一个临时的出来，没想到什么好方法，就只会这个了。
    吐个槽这个题的描述写的是真的丑。
    附录如下：
    > 初始值第一行是 1。  
    > 第二行读第一行，1 个 1，去掉个字，所以第二行就是 11。  
    > 第三行读第二行，2 个 1，去掉个字，所以第三行就是 21。  
    > 第四行读第三行，1 个 2，1 个 1，去掉所有个字，所以第四行就是1211。  
    > 第五行读第四行，1 个 1，1 个 2，2 个 1，去掉所有个字，所以第五行就是 111221。  
    > 第六行读第五行，3 个 1，2 个 2，1 个 1，去掉所有个字，所以第六行就是 312211。  
    > 然后题目要求输入 1 - 30 的任意行数，输出该行是啥。  
    > -- By hangxiaotian233 in the discuss tab. (改了俩错别字)
