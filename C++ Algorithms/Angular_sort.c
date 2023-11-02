#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){

    srand(time(NULL));
    int k ;
    //filling array with values ranging from 1 to 25:
    for (int i = 0; i < 5; i++)
    {
        /* code */
        for (int j = 0; j < 5; j++)
        {
            /* code */
            k = rand() %26;
            printf("\t%d\t ",k);
        }
        printf("\n");
    }
     return 0;
}