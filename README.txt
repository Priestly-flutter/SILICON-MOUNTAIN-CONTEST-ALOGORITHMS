Alogrithms testing ground, finding out their complexity

//write a documentation about the code found in the C++ Alogrithms directory in the bubble_sort.c
# Bubble Sort

Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted. The algorithm, which is a comparison sort, is named for the way smaller or larger elements "bubble" to the top of the list. Although the algorithm is simple, it is very inefficient and is generally outperformed by other algorithms (in particular, quicksort, heap sort, and merge sort).

Bubble sort can be described in the following steps:

1. Start at the beginning of the list.
2. Compare the first two elements. If the first element is greater than the second element, swap them.
3. Move to the next two elements.
4. Repeat steps 2 and 3 until you reach the end of the list.
5. Repeat steps 1 to 4 until the list is sorted.

The following is an example of how bubble sort would work on the list [5, 3, 1, 2, 4]:


​
Iteration 1:
Compare 5 and 3. Since 5 is greater than 3, swap them.
The list is now [3, 5, 1, 2, 4].
​
Iteration 2:
Compare 3 and 5. Since 3 is less than 5, do nothing.
Compare 5 and 1. Since 5 is greater than 1, swap them.
The list is now [3, 1, 5, 2, 4].
​
Iteration 3:
Compare 3 and 1. Since 3 is greater than 1, swap them.
Compare 1 and 5. Since 1 is less than 5, do nothing.
Compare 5 and 2. Since 5 is greater than 2, swap them.
The list is now [1, 3, 2, 5, 4].
​
Iteration 4:
Compare 1 and 3. Since 1 is less than 3, do nothing.
Compare 3 and 2. Since 3 is greater than 2, swap them.
Compare 2 and 5. Since 2 is less than 5, do nothing.
Compare 5 and 4. Since 5 is greater than 4, swap them.
The list is now


