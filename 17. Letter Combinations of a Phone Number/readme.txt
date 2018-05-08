Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent.

A mapping of digit to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

Example:

Input: "23"
Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"].


Although the above answer is in lexicographical order, your answer could be in any order you want.

输入一串数字，对应手机上的按键[2-9]的字母，问有多少种组合。


思路是先建立一个对应每个数字的字母表：vector<string> v = {{"abc"},{"def"},{"ghi"},{"jkl"},{"mno"},{"pqrs"},{"tuv"},{"wxyz"}};
然后使用for循环递归的求解每一层，每次到最底层结束，并回退，递归返回时也回退。
例如"234"
顺序是a->ad->adg->adh->adi->ae->aeg->aeh->.....

遇到的问题是，怎么把const char*转化为int类型，实际上是怎么把const char*转化为string再转化为int。
花了大约一个小时，采用的方式是
char c;
先声明一个string s，然后用s += c;int n = atoi(s.c_str());的方式解决的。
感觉是真的麻烦。
