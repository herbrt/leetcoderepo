第一次参加leetcode的比赛，四道题。看了第一题和第二题，第一题是字符串匹配，我还不太会，第二题写了很久都没写出来。
第一名用了22分钟AC了4道题，我感觉人和人的差距比人和狗都大。

题目描述：
Given a directed, acyclic graph of N nodes.  Find all possible paths from node 0 to node N-1, and return them in any order.
The graph is given as follows:  the nodes are 0, 1, ..., graph.length - 1.  graph[i] is a list of all nodes j for which the edge (i, j) exists.
Example:
Input: [[1,2], [3], [3], []] 
Output: [[0,1,3],[0,2,3]] 
Explanation: The graph looks like this:
0--->1
|    |
v    v
2--->3
There are two paths: 0 -> 1 -> 3 and 0 -> 2 -> 3.
Note:
The number of nodes in the graph will be in the range [2, 15].
You can print different paths in any order, but you should keep the order of nodes inside one path.

想思路就用了很久，后来画了个流程图，感觉还不错。结果读题读错了，以为对于每个节点，它的边都是按顺序排列的，第四个测例就gg了。
修修补补一下午，还是没能成功运行，我决定先复习一下BFS和DFS。

在stack overflow上看到了一个对BFS和DFS的总结，我觉得非常好，因此贴在下面：
https://stackoverflow.com/questions/5278580/non-recursive-depth-first-search-algorithm
DFS:
list nodes_to_visit = {root};
while( nodes_to_visit isn't empty ) {
  currentnode = nodes_to_visit.take_first();
  nodes_to_visit.prepend( currentnode.children );
  //do something
}
BFS:
list nodes_to_visit = {root};
while( nodes_to_visit isn't empty ) {
  currentnode = nodes_to_visit.take_first();
  nodes_to_visit.append( currentnode.children );
  //do something
}
The symmetry of the two is quite cool.

Update: As pointed out, take_first() removes and returns the first element in the list. 
-2018/3/11 20：39

我的思路是用栈实现DFS回溯，但我不能解决路径重复的问题，我一直没有想出用什么简单的方法标记已经访问的节点。
参考了discuss中的代码，使用递归实现的DFS,代码比我简洁许多，而且也不能用流程图显式的表达，由于每一层都用for循环对所有子节点进行访问。因此不存在标记的问题。
