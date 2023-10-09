/*
Algorithm to calculate the complexity of a C program:

1. **Input:** A C program.
2. **Output:** The complexity of the program.
3. **Steps:**
    1. **Parse the program.** This involves breaking the program down into its constituent parts, such as statements, expressions, and declarations.
    2. **Identify the basic blocks.** A basic block is a sequence of statements that are executed sequentially without any branches or jumps.
    3. **Calculate the cyclomatic complexity of each basic block.** The cyclomatic complexity of a basic block is a measure of the number of independent paths through the block.
    4. **Sum the cyclomatic complexities of all the basic blocks.** This gives the overall cyclomatic complexity of the program.
    5. **Interpret the cyclomatic complexity.** A higher cyclomatic complexity indicates a more complex program that is more likely to contain errors.

*/
#include<stdio.h>
