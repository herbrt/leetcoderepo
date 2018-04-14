Given an integer, convert it to a roman numeral.

Input is guaranteed to be within the range from 1 to 3999.

将给定整数以罗马数字形式输出。

观察可以发现，罗马数字的规律是每位由三个字母组成，例如：
个位：I，V，X可以组合成1-9
十位：X，L，C可以组合成10-90
以此类推

并且题目限定最大数为3999，因此可以参用暴力打表的方式，将每一位1-9的表示形式记录下来。
然后根据每一位具体值，输出相应的罗马数字。
