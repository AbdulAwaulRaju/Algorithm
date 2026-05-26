Problem Description 1:
The first line of the problem says "You will be given some integers in non-decreasing order". The problem asks you to report and remove the median of the list every time it is queried.

Having solved this problem, Danish now begins to wonder how to solve the problem if the input is in any order (not necessarily non-decreasing order as mentioned above).

Can you help him? Your task is to take as input a list of positive integers. Whenever -1 is given as input, you must output the median of the list, and remove it from the list. Take the smaller element as the median in case of even number of elements.

Sample Input:
9 10 2 5 1 18 -1 -1 4 3 -1 8 7 -1 0

Sample Output:
5 9 3 7
