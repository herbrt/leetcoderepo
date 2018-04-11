Determine whether an integer is a palindrome. Do this without extra space.

判断一个数是不是回文数。

我一开始的思路是通过取模%和求余/，得到给定数的逆序形式。
例如n=12345，使用res=0记录逆序形式。通过不断%10，得到末位，即采用res=10*res+n%10的方式。
再判断逆序形式与原数是否相等。

一个优化是，当n<res时，停止。判断条件为res/10==n||res==n。
