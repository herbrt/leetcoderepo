The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

 

Write the code that will take a string and make this conversion given a number of rows:

string convert(string text, int nRows);
convert("PAYPALISHIRING", 3) should return "PAHNAPLSIIGYIR"

这个题目的描述,emmmm...非常的不清晰，导致收获了1700+的差评。

实际上，题目问的是给定一个字符串，将其排列成锯齿状。
例如ABCDEFG，排列为：
A       E
  B   D   F
    C       G
然后按照AEBDFCG,即一行一行的顺序输出。

我的思路是建立一个大小为nRows的string类型的vector，vector[i]保存第i行。
然后遍历字符串，依次保存在vector中，实际上顺序永远是0,1,2...nRows-1,nRows-2...1,0,1,2...
因此只需要用一个index记录当前字符应该保存在哪一行就行。
