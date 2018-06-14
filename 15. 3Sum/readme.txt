Given an array nums of n integers, are there elements a, b, c in nums such that a + b + c = 0? Find all unique triplets in the array which gives the sum of zero.

Note:

The solution set must not contain duplicate triplets.

Example:

Given array nums = [-1, 0, 1, 2, -1, -4],

A solution set is:
[
  [-1, 0, 1],
  [-1, -1, 2]
]


求所有和为0的三元素集的集合，其中每种元素在三元素中只能用一次，每种三元素在集合中只能出现一次。

本题我借鉴了《挑战程序设计竞赛》中彩票题的解法，思路是先排序，然后计算两个元素的和s，再用二分查找找值为-s的值，若找到，则这三个元素是一个三元素集。

但是直接这样做无论是时间还是空间效率都是通不过的。
所以我还做了如下优化:
1.nums的元素少于三个直接返回空
2.每次匹配成功时，跳过与第一个元素或第二个元素相同的元素。
3.对最后的三元素集的集合去除重复的元素。

而比较主流的做法是，先确定一个元素，然后再用左右两个索引确定剩下两个元素的值，避免了处理重复元素的复杂步骤。
