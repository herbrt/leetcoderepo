Given an array nums of n integers and an integer target, find three integers in nums such that the sum is closest to target. Return the sum of the three integers. You may assume that each input would have exactly one solution.

Example:

Given array nums = [-1, 2, 1, -4], and target = 1.

The sum that is closest to the target is 2. (-1 + 2 + 1 = 2).

给定一个数字target，和一个数组nums。
求nums中的三元组之和，与target最接近的值。

思路类似于15.3Sum，先确定一个值，然后另外两个值由两边向中间逼近。用res记录当前最小的差，当出现更小的差时，替换res。
