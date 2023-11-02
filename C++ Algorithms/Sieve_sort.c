#include <stdio.h>

void sieve_sort();
void searching();
int main()
{

    int arr[5][5] = {
        {10, 18, 19, 20, 21},
        {11, 2, 6, 7, 22},
        {12, 3, 1, 8, 13},
        {13, 4, 5, 9, 24},
        {14, 15, 16, 17, 25}};
    /*
        what if we sieve the array for the first time and save the value in another 2D array of same size,
        after the first sieve, we need to rearrange the array so as to cancel out any empty space in the array

        QUESTION:
            How am i going to rearrange an array
    */
    int max_number = 25;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
    searching(arr);
}

void sieve_sort(int max_number, int arr[5][5])
{

    int n = max_number / 5;
    int select_bank[5][5];
    // selecting all the values from 0 to n
    for (int i = 0; i < 5; i++)
    {
        /* code */
        for (int j = 0; j < 5; j++)
        {
            /* code */
            // deriving a selection algorithm to work here
            if (arr[i][j] >= )
        }
    }
}

void searching(int array[5][5])
{
    int memory;
    memory = 0;
    // using the binanry search algorithm to search for the largest element in an array
    for (int i = 0; i < 5; i++)
    {
        /* code */
        for (int j = 0; j < 5; j++)
        {
            if (memory > array[i][j] > || = array[i][j + 1])
            {
                int temp = array[i][j];
                array[i][j] = array[i][j + 1];
                array[i][j + 1] = temp;
            }
            memory = temp;
        }
    }
    sieve_sort(memory, array);
}