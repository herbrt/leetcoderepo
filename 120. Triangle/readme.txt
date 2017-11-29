Given a triangle, find the minimum path sum from top to bottom. Each step you may move to adjacent numbers on the row below.

For example, given the following triangle
[
     [2],
    [3,4],
   [6,5,7],
  [4,1,8,3]
]
The minimum path sum from top to bottom is 11 (i.e., 2 + 3 + 5 + 1 = 11).

Note:
Bonus point if you are able to do this using only O(n) extra space, where n is the total number of rows in the triangle.

看到这个题有点懵，因为不太明白vector<vector<int>>是个怎样的数据结构。是一个元素为vector<int>的vector，操作元素为vector<int>理解了这一点，容易了许多。

起初不知道怎么下手，一开始觉得从头向后可行，但是感觉最后的结果还要选一个最大的，不过感觉这种思路也是可以的。

自己画了一个三角形，感觉从底部向上做挺好的，建了两个vector<int>：res和tmp，分别保存结果和原vector当前最后一排。
递归方程：res[i]= min(res[i],res[i+1]) + tmp[i]，还是比较直观的，就是每个元素与它底部较小的元素相加。

遇到的问题：
1.起初我定义了一个min宏，[min(x,y) x>y?x:y],直接把min(x,y)放到程序里，就像递推方程一样，不过得不到正确结果，于是我就把min(x,y)先赋给一个变量，再和res[i]相加。。
2.一开始没读懂题意，以为对于不完整的三角形，只有存在的部分可以作为路径，后来发现只要是底就可以。
例如
[
     [2],
    [3,4],
   [6,5,7],
  [4]
]
其中，4、5、7都是底，这带来的影响就是我起初补全最后一行用的INF，后来改成了0。

提交了一次就过了，开心-v-
时间复杂度是O(n),空间复杂度好像也是O(n)，只建了两个线性vector<int>。
