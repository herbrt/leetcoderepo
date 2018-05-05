Given a string s, find the longest palindromic substring in s. You may assume that the maximum length of s is 1000.

Example 1:

Input: "babad"
Output: "bab"
Note: "aba" is also a valid answer.
Example 2:

Input: "cbbd"
Output: "bb"

最长回文字串

一开始我的思路是求s的逆序串s'，然后再求s和s'的最长公共字串。然而这个思路是错的，例如'abcdba'并不是一个回文串，但用的算法会求得最长回文字串为'ab'或'ba'这显然不对。

实际上这个问题除了暴力枚举出全部的子串（1）外，常见的还有以每个字符为中心向外匹配（2），时间复杂度为O(n^2)。
以及更加高效的manacher's algorithm:时间复杂度O(n),空间复杂度O(n)。

这个算法对（2）算法进行了优化，主要体现在两方面：
1.利用在原串每个字符间插入一个相同符号，例如'#'，使所有的串统一为奇数串
2.记录当前所有回文串中的最右边界mx，该边界的中心id，以及每个字符的折半回文长度p[i]。那么对于一个字符c，若c的位置i<mx。则有p[i]=min{p[2id-i],mx-i}。
其中，2id-i是i相对于id的对称点。
详细证明可以参考https://www.felix021.com/blog/read.php?entryid=2040&page=2&part=1
