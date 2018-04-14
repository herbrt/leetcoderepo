Given a roman numeral, convert it to an integer.

Input is guaranteed to be within the range from 1 to 3999.

将罗马数字转换为整数。

将每种罗马字符对应的整数值保存，然后对每个字符判断其与其后一个字符的大小。
若大于则结果加上该字符代表的值，若小于则结果减去该字符代表的值。
