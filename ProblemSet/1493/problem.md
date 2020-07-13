# 
Time Limit: 1 Sec  Memory Limit: 16 MB


## Description
       Peter和John是一对好基友，形影不离。一天Peter和女朋友有个约会，作为学渣的John，非常渴望基友Peter能够早点回来帮他做功课。
       老师给了John 坐标横轴（X轴）上的不重复n个坐标，每个坐标（x，0）都对应于X轴上的唯一一个点，要求他按照一定的规则将这些点连接起来：
       先用第一个点（x1，0）与第二个点（x2，0）连起来，然后再用第二点（x2，0）连接第三个点（x3，0），然后再连接第四个点（x4，0）……一直连到第n个点（xn，0）。每两个点（xi，0）和（xi+1，0）之间需要用一个半圆来连接，这个半圆是以这两个点连线作为直径的。
       John需要找出上面的那些连线是否有相交的情况。John需要得到Peter的帮助，可Peter正跟女朋友浪漫呢，请你来帮助John解决这个问题吧。
       如果你还不太明白题意的话，请看下图，左图是有相交的情况，而右图是没有相交的情况。



## Input
       第一行会给出一个整数T(T≤30)，表示测试用例总数。
       每组测试用例的输入都是两行，第一行会给一个整数n（1≤n≤1000），然后第二行会给出互不相同的n个整数x1,x2,x3,...,xn（-10^6≤xi≤10^6），代表坐标轴n个点。即，xi表示坐标（xi，0）位置的点。


## Output
       每组测试用例输出一行。如果存在相交的情况，输出“Yes”，否则，输出“No”（不带引号）。


## Sample Input
```
2
4
0 10 5 15
4
0 15 5 10

```
## Sample Output
```
Yes
No

```

## HINT


## Append Code