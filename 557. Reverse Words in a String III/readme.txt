Given a string, you need to reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

Example 1:
Input: "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Note: In the string, each word is separated by single space and there will not be any extra space in the string.

将字符串内每个词翻转后输出。
我在344.Reverse String的基础上写的这道题，因此方法比较丑陋。
先将每个词保存在tmp中，再将tmp翻转保存在res中，由于词与词之间的界限是空格(' ')，为了保证一致性，我现在原串s后加入空格' '，再在输出之前将res的最后一个空格删除。

看别人的解答发现都是用reverse函数，思路就是在s[i]为' '或s的最后一个字符时，reverse(s[front],s[i])。

class Solution {
public:
    string reverseWords(string s) {
        size_t front = 0;
        for(int i = 0; i <= s.length(); ++i){
            if(i == s.length() || s[i] == ' '){
                reverse(&s[front], &s[i]);//其中，reverse的参数为(s.begin(),s.end())，s.end()指向末尾元素的后一个位置。
                front = i + 1;
            }
        }
        
        return s;
    }
};
